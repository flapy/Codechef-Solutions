#include<stdio.h>
#include<math.h>
int main()
{
	long long int j,k,i,n,x,test,v[100002],d[100002],vindex[100002],dindex[100002];
	scanf("%lld",&test);
	while(test--)
	{
		long long int cnt=0;
		scanf("%lld",&n);
		for(i=0,j=0,k=0;i<n;i++)
		{
			scanf("%lld",&x); //ignore the zeroes
			if(x<0)
			{
				d[j]=x;
				dindex[j]=i;
				j++;
			}
			else if(x>0)
			{
				v[k]=x;
				vindex[k]=i;
				k++;
			}
		}
		long long int villages=k;
		j=0;		
		for(i=0;i<villages;i++)
		{
			if(v[i]<abs(d[j]))
			{
				d[j]+=v[i];
				cnt+=abs((vindex[i]-dindex[j])*v[i]);
				v[i]=0;
			}
			else if(v[i]>abs(d[j]))
			{
				v[i]+=d[j];
				cnt+=abs((vindex[i]-dindex[j])*d[j]);
				d[j]=0;
				j++;
				i=i-1;	
			}
			else
			{
				v[i]+=d[j];
				cnt+=abs((vindex[i]-dindex[j])*d[j]);
				d[j]=0;
				j++;
			}
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
