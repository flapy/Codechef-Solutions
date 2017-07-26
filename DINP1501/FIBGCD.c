#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(b==0)
	return a;
    return gcd(b,a%b);
}
int main()
{
	long long int i,t,a,b,ans,first,last,next;
	scanf("%lld",&t);
	while(t--)
	{
		first=0;
		last=1;
		scanf("%lld %lld",&a,&b);
		ans=gcd(a,b);
		if(ans==1)
		{
			printf("1\n");
			continue;
		}
		for(i=1;i<ans;i++)
		{
			next=(first+last)%1000000007;
			first=(last)%1000000007;
			last=(next)%1000000007;
		}
		printf("%lld\n",next%1000000007);
	}
	return 0;
}
