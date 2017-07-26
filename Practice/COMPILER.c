#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000001];
	long long int t,cnt,i,l,j,a;
	scanf("%lld",&t);
	while(t--)
	{
		j=0;
		a=0;
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='<')
			j++;
			else
			j--;
			if(j==0)
			{
				if((i+1)>a)
				a=i+1;
			}
			if(j==-1)
			break;
		}
			printf("%lld\n",a);
	}
	return 0;
}
