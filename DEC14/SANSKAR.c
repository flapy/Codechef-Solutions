//Chirag Agarwal
#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,a[100005],k,visit[100005],cnt,i,galat_kitni_bar;
    scanf("%lld",&t);
    while(t--)
    {
	    cnt=0;
	    scanf("%lld %lld",&n,&k);
	    for(i=0;i<n;i++)
		    visit[i]=0;
    	for(i=0;i<n;i++)
    		scanf("%lld",&a[i]);
    	long long int sum=0,max;
    	for(i=0;i<n;i++)
    	{
    		if(i==0)
    		{
    			max=a[i];
    			sum+=a[i];
    			continue;
    		}
    		sum+=a[i];
    		if(a[i]>max)
    		max=a[i];
    	}
    	long long int reqd;
    	reqd=sum/k;
    	if(k>n)
    		printf("no\n");
    	else if(max>reqd)
    		printf("no\n");
    	else if(sum%k==0)
    	{
    		long long int powerset=pow(2,n),i,j,final_HAIN=0;
    		for(i=0;i<powerset;i++)
    		{
    			long long int calc=0;
    			for(j=0;j<n;j++)
    			{
    				if(i & (1<<j))
    				{
    					calc+=a[j];
    				}
    			}
    			if(calc==reqd)
    			{
    				long long int p,check=1;
    				for(p=0;p<n;p++)
    				{
    					if(i &(1<<p))
    					{
    						if(visit[p]==1)
    						{
    							check=0;
    							break;
    						}
    					}
    				}
    				if(check)
    				{
    					cnt++;
    					for(p=0;p<n;p++)
    					{
    						if(i &(1<<p))
    						{
     							visit[p]=1;
    						}
    					}
    				}
   			 	}
    			if(cnt==k)
    			{
    				final_HAIN=1;
    				printf("yes\n");
    				break;
    				
    				/*long long int i,flag=1;
    				for(i=0;i<n;i++)
    				{
    					if(visit[i]==0)
    					{
    						flag=0;
    						break;
    					}
    				}
    				if(flag)
    				{
    					final_HAIN=1;
    					printf("yes\n");
    					break;
    				}*/
    			}
    		}
    		if(final_HAIN==0)
    			printf("no\n");
    	}
    	else if((sum%k)!=0)
    	{
    		printf("no\n");
    	}
    }
	return 0;
}
