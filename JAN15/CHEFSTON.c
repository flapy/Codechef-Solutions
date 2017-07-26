//Chirag Agarwal
#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,k,i,a[100005],b[100005],max;
	    scanf("%lld %lld",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	        a[i]=k/a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&b[i]);
	        if(i==0)
	        max=a[i]*b[i];
	        else
	        {
	           long long int ans=a[i]*b[i];
	            if(ans>max)
	            max=ans;
	        }
	    }
	    printf("%lld\n",max);
	    
	}
	return 0;
}
