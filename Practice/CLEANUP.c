#include<stdio.h>
int fastread()
{
    int i=0;
    char c=0;
    while (c<33)
        c=getchar_unlocked();
    while (c>33)
    {
		i = i*10+c-'0';
		c=getchar_unlocked();
    }
    return i;
}
int main()
{
	int t,a[1000],b[1000],n,m,i,j,flag;
	t=fastread();
	while(t--)
	{
		n=fastread();
		m=fastread();
		for(i=0;i<m;i++)
		a[i]=fastread();
		int k=n-m;
		int p=0;
		for(i=1;i<=n;i++)
		{
			flag=0;
			for(j=0;j<m;j++)
			{
				if(i==a[j])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
				b[p]=i;
				p++;
			}
		}
		for(i=0;i<k;i++)
		{
			if(i%2==0)
			{
				printf("%d ",b[i]);
			}
		}
		printf("\n");
		for(i=0;i<k;i++)
		{
			if(i%2!=0)
			{
				printf("%d ",b[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
