#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **s;
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
	 	int ans=0;
		scanf("%d",&n);
		char **s = malloc(n* sizeof(char *));
	for(i = 0; i < n; i++)
  	s[i] = malloc(n* sizeof(char));
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}
		int **rayx;
		int **rayy;
		 rayx = malloc(n* sizeof(int *));
	for(i = 0; i < n; i++)
  	rayx[i] = malloc(n* sizeof(int));
  	rayy = malloc(n* sizeof(int *));
	for(i = 0; i < n; i++)
  	rayy[i] = malloc(n* sizeof(int));
		int flag;
		for(j=0;j<n;j++)
		{
			flag=1;
			for(i=n-1;i>=0;i--)
			{
				if(s[i][j]=='#')
				flag=0;
				rayy[i][j]=flag;
			}
		}
		/*for(j=0;j<n;j++)
		{
			int flag=1;
			for(i=n-1;i>=0;i--)
			{
				if(s[j][i]=='#')
				flag=0;
				rayx[j][i]=flag;
			}
		}*/
		for( i = 0;i<n;i++)
        {
            flag=1;
            for( j=n-1;j>=0;j--)
            {
                if(s[i][j]=='#')  flag=0;
                rayx[i][j]=flag;
            }
        }
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(rayx[i][j]==1 &&rayy[i][j]==1)
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
