#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdio.h>
//Chirag Agarwal
int main()
{
	long long int t,n,m,i;
	scanf("%lld",&t);
	while(t--)
	{
		long long int max,min,p;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%lld",&p);
			if(i==0)
			{
				max=min=p;
				continue;
			}
			if(p>max)
			max=p;
			if(p<min)
			min=p;
		}
		long long int a[100004];
		long long int k=0;
		char check[100004];
		for(i=0;i<n;i++)
		check[i]='n';
		//printf("%lld %lld\n",max,min);
		a[max]=0;
		check[max]='e';
			for(i=max-1;i>=0;i--)
			{
				a[i]=++k;
				check[i]='e';	
			}
			k=0;
			for(i=max+1;i<n;i++)
			{
				a[i]=++k;
				check[i]='e';
			}
			k=0;
			long long int x;
			for(i=min+1;i<n;i++)
			{
				x=++k;
				if(check[i]=='e')
				{
					if(a[i]<x)
					a[i]=x;
				}
				else
				a[i]=x;
			}
			k=0;
			for(i=min-1;i>=0;i--)
			{
				x=++k;
				if(check[i]=='e')
				{
					if(a[i]<x)
					a[i]=x;
				}
				else
				a[i]=x;
			}
			for(i=0;i<n-1;i++)
			{
				printf("%lld ",a[i]);
			}
			printf("%lld\n",a[n-1]);
	}
	return 0;
}
