#include<stdio.h>
int main()
{
	int a[100],n,t,p,q,i,j;
	scanf("%d",&t);
	while(t--)
	{
		p=0;q=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			q++;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				p++;
			}
		}
		if(p==q)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
