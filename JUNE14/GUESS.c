#include<stdio.h>
long long int gcd(long long int ,long long int );
int main()
{
	long long int t,i,max,min,a,b,m1,cas,total,maxeven,maxodd,mineven,minodd;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		max=a>b?a:b;
		min=a<b?a:b;
		cas=max*min;
		if(max%2!=0)
		{
			maxodd=max/2+1;
			maxeven=max/2;
			if(min%2!=0)
			{
				minodd=min/2+1;
				mineven=min/2;
			}
			else
			{
				minodd=mineven=min/2;
			}
		}
		else
		{
			maxodd=maxeven=max/2;
			if(min%2!=0)
			{
				minodd=min/2+1;
				mineven=min/2;
			}
				else
			{
				minodd=mineven=min/2;
			}
		}
		total=(minodd*maxeven)+(maxodd*mineven);
		m1=gcd(total,cas);
		total=total/m1;
		cas=cas/m1;
		printf("%lld/%lld\n",total,cas);
	}
	return 0;
}
long long int gcd(long long int n, long long int m)
{
	long long int g, remainder;
 
	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
 
	g = m;
 
	return g;
}
