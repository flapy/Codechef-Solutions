#include<stdio.h>
int main()
{
	long long int j,n,a[100000],i=0,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;)
	{
		scanf("%lld",&a[i]);
		i++;
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n;j++)
	if(i<j)
	sum+=a[i]&a[j];
	printf("%lld",sum);
	return 0;
}
