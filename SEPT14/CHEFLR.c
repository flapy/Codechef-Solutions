#include<stdio.h>
#include<math.h>
int main()
{
	long long int t=0;
	scanf("%lld",&t);
	while(t--)
	{
		char s[100005];
		long long int i=0,cnt=1,ans=1,m=1000000007;
		scanf("%s",s);
		while(s[i]!='\0')
		{
			if((cnt%2)!=0)
			{
				if(s[i]=='r')
				ans=(ans*2+2)%m;
				else
				ans=(ans*2)%m;
			}
			else
			{
				if(s[i]=='r')
				ans=(ans*2+1)%m;
				else
				ans=(ans*2-1)%m;
			}
			cnt++;i++;
		}
		printf("%lld",ans);
		printf("\n");
	}
	return 0;
}
