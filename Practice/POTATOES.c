#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
	int  t,y,z,x,sum,i,p;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		z=0;
		
		scanf("%d %d",&x,&y);
		sum=x+y;
		for(i=1;;i++)
		{
			z=sum+i;
			p=prime(z);
			if(p==1)
			{
				printf("%d\n",i);
				break;
			}	
		}
	}
	return 0;
}
int prime( int k)
{
	int i,flag=1;
	for(i=2;i<=sqrt(k);i++)
	{
		if(k%i==0)
		{
			flag=0;
			break;
		}
	}
		return (flag);
}
