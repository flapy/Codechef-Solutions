#include<stdio.h>
int main()
{
  int a,b,t,max,min;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d %d",&a,&b);
  min=a>b?a:b;
  max=a+b;
  printf("%d %d\n",min,max);
	}
return 0;
}
