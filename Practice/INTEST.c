#include<stdio.h>
main()
{
	int n,k,i=0,cnt=0;
	int p;
	scanf("%d %d",&n,&k);
	while(cnt<n)
	{
		scanf("%d",&p);
		if(p%k==0)
		i++;	
		cnt++;		
	}
	printf("%d",i);
	return 0;
}
