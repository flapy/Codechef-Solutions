#include<stdio.h>
#include<math.h>
void printPowerSet(long long int *a, long long int n,long long int p)
{
	long long int power = pow(2,n);
	long long int i, j;
	long long int max=p^0,flag,xor;
	for(i=0;i<power;i++)
	{
		flag=0;
		for(j = 0; j <n; j++)
		{
			if(i & (1<<j))
			{
				if(flag==0)
				{
					xor=a[j];
					flag++;
				}	
				else
				xor=xor^a[j];
			}
		}
		if(flag)
		{
			long long int ans;
			ans=xor^p;
//printf("ans %lld\n",ans);
			if(ans>max)
				max=ans;
		}	
	}
	 printf("%lld\n",max);
}
int main()
{
	long long int t,k,a[1003],i,j,max,xor,n;
	scanf("%lld",&t);
	while(t--)
	{
		max=0;
		scanf("%lld %lld",&n,&k);
		if(n>20)
		{
			for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
			max=0^k;
			for(i=0;i<n-1;i++)
			{
				xor=a[i]^k;
				if(xor>max)
				max=xor;
				for(j=i+1;j<n;j++)
				{
					xor=xor^a[j];
					if(xor>max)
					max=xor;
				}
			}
			printf("%lld\n",max);
		}
		else
		{
			for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
			 printPowerSet(a,n,k);
		}
		
	}
	return 0;
}
