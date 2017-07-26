#include<stdio.h>
#include<math.h>
int main()
{
	long long int m,r,g,b,t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int rp[102],gp[102],bp[102],i;
		long long int maxr=0,maxg=0,maxb=0,max,smax;
		scanf("%lld %lld %lld %lld",&r,&g,&b,&m);
		for(i=0;i<r;i++)
		{
			scanf("%lld",&rp[i]);
			if(rp[i]>maxr)
			maxr=rp[i];
		}
		for(i=0;i<g;i++)
		{
			scanf("%lld",&gp[i]);
			if(gp[i]>maxg)
			maxg=gp[i];
		}
		for(i=0;i<b;i++)
		{
			scanf("%lld",&bp[i]);
			if(maxb<bp[i])
			maxb=bp[i];
		}
		/*max=maxr;
		if(maxg>max)
		max=maxg;
		if(maxb>max)
		max=maxb;*/
		long long int a,b,c;
		a=maxr;b=maxg;c=maxb;
		for(i=0;i<m;i++)
		{
			//printf("max=%lld\n",max);
			if(a>b)
			{
				max=a;
				//smax=b;
			}
			else
			{
				max=b;
				//smax=a;
			}
			if(c>max)
			{
				//smax=max;
				max=c;
			}
			if(max==a)
			{
				a/=2;
			}
			else if(max==b)
			{
				b/=2;
			}
			else
			{
				c/=2;
			}
		//printf("%d %d",max,smax);
		}
		if(a>b)
		{
			max=a;
			//smax=b;
		}
			else
			{
				max=b;
				//smax=a;
			}
			if(c>max)
			{
				//smax=max;
				max=c;
			}
		printf("%lld\n",max);
	}
		return 0;
}
