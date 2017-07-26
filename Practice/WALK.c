#include <stdio.h>
int main()
{
    int n,i,t,a[100000];
    scanf("%d",&t);
    while(t--)
	{
	    int min = 0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	   	{
   			scanf("%d",&a[i]);
   			a[i]+=i;
  			if(min<a[i])
    		min = a[i];
    	}
    	printf("%d\n",min);
    }
    return 0;
}
