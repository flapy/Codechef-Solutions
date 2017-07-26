#include<stdio.h>
int main()
{
	long long int n,i=0;
	scanf("%lld",&n);
	char s[100005];
	scanf("%s",s);
	while(s[i]!='\0')
	{
		if(s[i]=='W')
		{
			n=2*n+11;
		}
		else
		{
			if(n%2!=0)
			{
				n=n/2+1;
			}
			else
			{
				n=n/2;
			}
		}
		i++;
	}
	printf("%lld\n",n);
	return 0;
}
