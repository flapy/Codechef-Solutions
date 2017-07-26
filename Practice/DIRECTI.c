#include<stdio.h>
#
int main()
{
	int n,t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char s1[50][50],s2[50][50],s3[50][50];
		for(i=0;i<n;i++)
		{
			scanf("%s",s1[i]);
			scanf("%s",s2[i]);
			//fflush(stdin);
			gets(s3[i]);
		}
		for(j=1,i=n;j<=n;j++,i--)
		{
			if(j==1)
			{
				printf("Begin on%s\n",s3[n-1]);
			}
			else
			{
				if(s1[i][0]=='L')
				printf("Right on%s\n",s3[i-1]);
				else
				printf("Left on%s\n",s3[i-1]);
			}
		}
		printf("\n");
	}
	return 0;
}
