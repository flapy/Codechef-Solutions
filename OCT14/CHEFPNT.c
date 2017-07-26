#include<stdio.h>
int main()
{
	char a[104][104];
	long long int n,m,i,j,k,p,q;
	scanf("%lld %lld %lld",&n,&m,&k);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			a[i][j]='w';
		}
	}
	for(i=0;i<k;i++)
	{
			scanf("%lld %lld",&p,&q);
			a[p][q]='b';
	}
	long long int cnt=0;
	long long int k2=0;
	long long int s[10000],s1[10000];
	//printf("%lld\n",ans);
	for(i=1;i<=n;i++)
	{
		int cnt=0;
		for(j=1;j<=m;j++)
		{
			if(a[i][j]=='w')
			{
				a[i][j]='r';
				if(cnt==0)
				{
					s[k2]=i;
					s1[k2]=j;
					k2++;
					cnt++;
				}
			}
			else
			cnt=0;
		}
	}
	printf("%lld\n",k2);
	for(i=0;i<k2;i++)
	{
		printf("%lld %lld 0\n",s[i],s1[i]);
	}
	return 0;
}
