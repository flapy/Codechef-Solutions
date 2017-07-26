#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int l,d,s,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
		long long int d2,r;
		d2=s+s*c;
		r=d2/s;
		if(s*pow((r),d-1) >= l)
		printf("ALIVE AND KICKING\n");
		else
		printf("DEAD AND ROTTING\n");
	}
	return 0;
}
