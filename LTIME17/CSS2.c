#include<stdio.h>
int main()
{
	long long int i,j,k,max,t,n,m,idi,atr,id[100005],attr[100005],val[100005],priority[100005],hold[100005],value[100005],pri[100005];
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld %lld %lld",&id[i],&attr[i],&val[i],&priority[i]);
	}
	
	long long int p;
	for(p=0;p<m;p++)
	{
		scanf("%lld %lld",&idi,&atr);
		for(i=0,j=0,k=0;i<n;i++)
		{
			if(idi==id[i] && attr[i]==atr)
			{
				value[j]=val[i];
				pri[j]=priority[i];
				if(j==0)
				{
					max=pri[j];
					hold[k]=j;
					k++;
					j++;
				}
				else
				{
					if(pri[j]>=max)
					{
						max=pri[j];
						hold[k]=j;
						k++;
						j++;
					}
				}
			}
		}
		printf("%lld\n",value[hold[k-1]]);
	}
	return 0;
}
