#include<stdio.h>
int  main()
{
	int array[100][100],n,m,i,j,tru=0;scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) for(j=0;j<n;j++)
		{scanf("%d",&array[i][j]);if((array[i][j])==m) tru=1;
		}
	if(tru) printf("YES\n");
	else printf("NO\n");
	return 0;
}
