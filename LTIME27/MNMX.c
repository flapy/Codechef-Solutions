#include <stdio.h>
    #define gc getchar_unlocked
    int read_int() {
    char c = gc();
    while(c<'0' || c>'9') c = gc();
    int ret = 0;
    while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
    }
    return ret;
    }
    int main() {
    // your code goes here
    int t;
    t=read_int();
    while(t--)
    {
    int n;
    n=read_int();
    int a,i;
    long long int min;
    for(i=0;i<n;i++)
    {
    a=read_int();
    if(i==0)
    {
    min=a;
    }
    else if (a<min)
    min=a;
    }
    printf("%lld\n",min*(n-1));
    //cout<<min*(n-1)<<endl;
    }
    return 0;
    }
