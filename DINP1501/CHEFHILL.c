#include<stdio.h>
#define gc getchar_unlocked
long long int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
	int n,a[100005],i,c,d,q;
	n=read_int();
	for(i=0;i<n;i++)
	{
		a[i]=read_int();
	}
	q=read_int();
	while(q--)
	{
		int flag=1,calc;
		c=read_int();d=read_int();
		calc=a[c-1];
		for(i=c;i<d-1;i++)
		{
			if(a[i]>calc)
			{
				flag=0;
				break;
			}	
		}
		if(flag)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
