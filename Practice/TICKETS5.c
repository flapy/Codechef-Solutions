#include<stdio.h>
#include<string.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		char s[100005];
		scanf("%s",s);
		long long int i;
		char a=s[0];
		char b=s[1];
		if(a==b)
		{
			printf("NO\n");
			continue;
		}
		long long int n=strlen(s);
		int flag=1;
		for(i=0;i<n-1;i+=2)
		{
			if(s[i]!=s[i+1])
			{
				if(s[i]==a && s[i+1]==b)
				continue;
				else
				{
					flag=0;
					printf("NO\n");
					break;
				}
			}
			else
			{
				flag=0;
				printf("NO\n");
				break;
			}
		}
		if(n%2!=0 && flag==1)
		{
			if(s[0]!=s[n-1])
			printf("NO\n");
			else
			printf("YES\n");
			continue;
		}
		if(flag)
		printf("YES\n");
	}
	return 0;
}
