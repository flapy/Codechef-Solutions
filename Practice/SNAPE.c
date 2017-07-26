#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	float a,b,l,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f %f",&b,&l);
		a=sqrt(l*l-b*b);
		c=sqrt(l*l+b*b);
		printf("%f %f\n",a,c);
	}
	return 0;
}
