#include<stdio.h>
int main()
{
	long long int t,a[5001],b[5001];
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,q,i,qe;
		scanf("%lld %lld",&n,&q);
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&a[i],&b[i]);
		} 
		while(q--)
		{
			int flag=1;
			scanf("%lld",&qe);
			for(i=0;i<n;i++)
			{
				if(qe>=a[i] && qe<=b[i])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}
