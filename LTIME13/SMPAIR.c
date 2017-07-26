#include<stdio.h>
int main()
{
    long long int t,a[100000],n;
    long long int i,j,sum,min;
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld",&n);
              for(i=0;i<n;i++)
              scanf("%lld",&a[i]);
              sum=0;min=0;
              min=a[0]+a[1];
              for(i=0;i<n-1;i++)
              {
                                for(j=i+1;j<n;j++)
                                {
                                                  sum=a[i]+a[j];
                                                      if(sum<min)
                                                      min=sum;
                                                  
                                }
              }
              printf("%lld\n",min);
    }
    return 0;
    
}
