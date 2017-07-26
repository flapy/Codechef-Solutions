//Chirag Agarwal
#include<stdio.h>
int main()
{
	int test,numb,fuk,j,p,q;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&numb);
		for(j=0;j<numb;j++)
		scanf("%d %d",&p,&q);
		for(j=1;j<=numb;j++)
		{
			if(j==1)
			fuk=j;
			else
			fuk=fuk^j;
		}
		printf("%d\n",fuk);
	}
	return 0;
}
