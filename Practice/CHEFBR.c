#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,cnt=1;
	scanf("%lld",&n);
	long long int i,a[103];
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	long long int j,k=pow(2,n);
	for(i=0;i<k;i++)
	{
		long long int b[103],p=0,flag=0;
		for(j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				flag=1;
				b[p]=a[j];
				p++;
			}
		}
		if(flag)
		{
			long long int x,y,stack[103],flag=1;
			//for(x=0;x<p;x++)
			//printf("%lld ",b[x]);
			//printf("\n");
			for(x=0,y=0;x<p;x++)
			{
				if(b[x]<0)
				{
					stack[y]=b[x];
					y++;
				}
				else
				{
					if(y==0)
					{
						flag=0;
						break;
					}
					if(abs(stack[y-1])==b[x])
					y--;
					else
					{
						flag=0;
						break;
					}
				}
			}
			if(y==0 && flag)
			{
				//printf("yes\n");
				cnt=(cnt+1)%1000000007;
			}
		}
	}
	printf("%lld\n",cnt%1000000007);
	return 0;
}
