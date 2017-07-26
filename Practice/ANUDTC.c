#include<stdio.h>
    int main()
    {
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    if(n<=360)
    {
    if(360%n==0)
    printf("y ");
    else
    printf("n ");
    printf("y ");
    if(n*(n+1)/2<=360)
    printf("y\n");
    else
    printf("n\n");
    }
    else
    printf("n n n\n");
    }	
    return 0;
    }
