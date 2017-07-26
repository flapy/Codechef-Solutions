#include<stdio.h>
int main()
{
    long long int n, i=0, j=0, k=0;
    long int a[100000];
    scanf("%lld", &n);
    for(i=0;i<n;i++)
    {
        scanf("%ld", &a[i]);
    }
    i=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            j=0;
        }
        if(a[i]!=0)
        {
            j++;
            if(j>k)
	    	k=j;
		}
        i++;
    }
    printf("%lld",k);
    return (0);
}
