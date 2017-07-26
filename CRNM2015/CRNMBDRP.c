#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		double x;
		scanf("%lf",&x);
		if(x<=100.0)
		printf("0.000000\n");
		else
		{
			double ans=x-100.0;
			printf("%lf\n",(ans/20)*0.1);
		} 
	}
	return 0;
}
