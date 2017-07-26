#include<stdio.h>
int main()
{
	long int n,q,i,j,x,y,k;
		scanf("%ld %ld",&n,&q);
		long int a[n],temp,cnt;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<q;i++)
		{
			cnt=0;
			scanf("%ld %ld",&x,&y);
			temp=a[x-1];
			a[x-1]=a[y-1];
			a[y-1]=temp;
			for(j=0;j<n-1;j++)
			{
				for(k=j+1;k<n;k++)
				{
					if(a[j]>a[k])
					cnt++;	
				}
			}
			printf("%ld\n",cnt%2);
		}
	return 0;
}
