#include<stdio.h>
int main()
{
  float b,q;
  int p;
	scanf("%d %f",&p,&q);
	if(p%5==0&&p<=2000&&q<=2000&&-p+q>0.5)
	{
		b=q-p-0.50;		
		printf("%.02f",b);
	}
else
printf("%.02f",q);
return 0;
}
