#include<stdio.h>
    int main()
    {
    long long int n;
    scanf("%lld",&n);
    if(n%3==0)
    printf("yes");
    else if(n%6==1)
    printf("yes");
    else
    printf("no");
    return 0;
    }
