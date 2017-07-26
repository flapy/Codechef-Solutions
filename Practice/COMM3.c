#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3,t,x;
	float a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		scanf("%d %d",&x3,&y3);
		a=(pow((x1-x2),2)+pow((y1-y2),2));
		b=(pow((x3-x2),2)+pow((y3-y2),2));
		c=(pow((x1-x3),2)+pow((y1-y3),2));
		if((a<=x*x && b<=x*x) || (a<=x*x && c<=x*x) || (b<=x*x && c<=x*x))
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
