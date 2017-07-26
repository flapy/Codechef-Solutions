#include<stdio.h>
    long long int *turn(long long int [],long long int );
    int main()
    {
    long long int n,i,k;
    scanf("%lld %lld",&n,&k);
    long long int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    if(k==0)
    {
    }
    else if(k%2==1)
    turn(a,n);
    else
    {
    turn(a,n);
    turn(a,n);
    }
    for(i=0;i<n-1;i++)
    {
    printf("%lld ",a[i]);
    }
    printf("%lld\n",a[n-1]);
    return 0;
    }
    long long int *turn(long long int a[],long long int n)
    {
    long long int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>max)
    max=a[i];
    }
    for(i=0;i<n;i++)
    a[i]=max-a[i];
    return a;
    }
