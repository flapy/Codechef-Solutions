#include<stdio.h>
int main()
{
	long long int array[100003],n,q,rotation=0,cnt=0;
	scanf("%lld %lld",&n,&q);
	long long int j;
	for(j=0;j<n;j++)
	scanf("%lld\n",&array[j]);
	while(q--)
	{
		char ch;
		scanf(" %c",&ch);
		long long int d,result;
		scanf("%lld",&d);
		if(ch=='C')
		{
			if(cnt==0)
			{
				rotation=d;
				cnt++;
			}
			else
			{
				rotation=(rotation+d)%n;
			}
		}
		else if(ch=='A')
		{
			if(cnt==0)
			{
				rotation=n-d;
				cnt++;
			}
			else
			{
				rotation=(rotation+n-d)%n;
			}
		}
		else
		{
			if(rotation==0 )
			printf("%lld\n",array[d-1]);
			else
			{
				if((d+rotation)%n==0)
					result=array[n-1];
				else
					result=array[(d+rotation)%n-1];
				printf("%lld\n",result);
			}
		}
	}
	return 0;
}
