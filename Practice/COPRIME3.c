#include<stdio.h>
long long int gcd(long long int ,long long int);
int main()
{
	long long int n,i,j,k,ans,a[100000],cnt=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				ans=gcd(gcd(a[i],a[j]),a[k]);  //gcd(gcd(a,b),c)
				if(ans==1)
				cnt++;
			}
		}	
	}
	printf("%lld",cnt);
	return 0;
}
long long int gcd(long long int a, long long int b)
{
    long long int t;
    while(b!=0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}
