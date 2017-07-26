#include<stdio.h>
int main()
{
	long long int t,cnt,n,i;
	char s[100002];
	scanf("%lld",&t);
	while(t--)
	{
		cnt=0;
		scanf("%lld",&n);
		scanf("%s",s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
			cnt++;
		}
		printf("%lld\n",cnt+((cnt*(cnt-1))/2));
	}
	return 0;
}
