#include<stdio.h>
long long int cnt(long long int n)
{
	long long int p,sum=0;
	while(n!=0)
	{
		p=n%10;
		sum+=p;
		n/=10;
	}
	return (sum);
}
int main()
{
	long long int i,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0;
	long long int n,t;
	scanf("%lld",&t);
	/*for(i=10;i<100;i++)
	{
		sum2=cnt(i);
		if(sum2==13)
		cnt2++;
	}
	for(i=100;i<1000;i++)
	{
		sum3=cnt(i);
		if (sum3==13)
		cnt3++;
	}
	for(i=1000;i<10000;i++)
	{
		sum4=cnt(i);
		if(sum4==13)
		cnt4++;
	}
	for(i=10000;i<=100000;i++)
	{
		sum5=cnt(i);
		if(sum5==13)
		cnt5++;
	}
	for(i=100000;i<1000000;i++)
	{
		sum6=cnt(i);
		if(sum6==13)
		cnt6++;
	}
	for(i=1000000;i<10000000;i++)
	{
		sum7=cnt(i);
		if(sum7==13)
		cnt7++;
	}
	printf("%lld %lld %lld %lld %lld %lld\n",cnt2,cnt3,cnt4,cnt5,cnt6,cnt7);
	*/
	cnt2=6;
	cnt3=75;
	cnt4=480;
	cnt5=2205;
	cnt6=8232;
	cnt7=26544;
	while(t--)
	{
	scanf("%lld",&n);
	if(n==0)
	printf("0\n");
	else
	{
		if(n<=6)
	printf("2\n");
	else if(n<=75)
	printf("3\n");
	else if(n<=cnt4)
	printf("4\n");
	else if(n<=cnt5)
	printf("5\n");
	else if(n<=cnt6)
	printf("6\n");
	else if(n<=cnt7)
	printf("7\n");
	else printf("8\n");
	}
	}
	return 0;
}
