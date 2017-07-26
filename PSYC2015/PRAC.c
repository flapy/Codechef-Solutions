#include<stdio.h>
#include<math.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		double a,b,c,area,ans;
		scanf("%lf %lf %lf",&a,&b,&c);
		double p=(a+b+c)/2;
		area=sqrt((p-a)*(p-b)*(p-c)*(p));
		ans=a*b*c/(4*area);
		printf("%.2lf\n",ans);
	}
	return 0;
}
