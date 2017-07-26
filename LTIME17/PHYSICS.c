#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,f,a[100004],i,j;
	scanf("%d",&t);
	while(t--)
	{
		int cnt=0;
		 scanf("%d %d",&n,&f);
		for(i=0;i<n;i++)
		{
			 scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				cnt++;
				else
				{
					if(a[i]>a[j])
					{
						int x=1,q=a[i];
						if(a[i]%a[j]==0)
						{
							while(q!=0)
							{
								q=a[i]/pow(f,x);
								if(q==a[j])
								{
									cnt++;
									break;
								}
								x++;
							}
						}
					}
					else
					{
						int x=1,q=a[j];
						if(a[j]%a[i]==0)
						{
							while(q!=0)
							{
								q=a[j]/pow(f,x);
								if(a[i]==q)
								{
									cnt++;
									break;
								}
								x++;
							}
						}
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
