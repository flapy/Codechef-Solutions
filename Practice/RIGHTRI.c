#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3,t,cnt=0;
int a,b,c;	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
		a=(pow((x1-x2),2)+pow((y1-y2),2));
		b=(pow((x3-x2),2)+pow((y3-y2),2));
		c=(pow((x1-x3),2)+pow((y1-y3),2));
		if(((a+b)==c) || ((a + c)==b) || ((b + c)==a))
		{
		cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
