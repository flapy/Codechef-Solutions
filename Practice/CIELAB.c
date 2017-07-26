#include<stdio.h>
int main()
{
	int a,b;
	int c;
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c%10==9)
	c-=1;
	else 
	c+=1;
	printf("%d",c);
	return 0;
}
