#include <stdio.h>
#include<stdlib.h>
#define gc getchar_unlocked
#define gc getchar_unlocked
int gcd( int a, int b)
{
if(b==0)return a;
return gcd(b,a%b);
}
int main(void) {
// your code goes here
int t,n,q,a[100005],i,l,r,gc=0;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&q);
int final=0,precompute_fromend[100005],precompute_fromstart[100005];
for(i=0;i<=n;i++)
{
precompute_fromstart[i]=0;
precompute_fromend[i]=0;
}
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
final=gcd(final,a[i]);
precompute_fromend[i]=final;
}
final=0;
for(i=0;i<n;i++)
{
final=gcd(final,a[i]);
precompute_fromstart[i+1]=final;
}
while(q--)
{
gc=0;
scanf("%d %d",&l,&r);
gc=gcd(precompute_fromstart[l-1],precompute_fromend[r]);
printf("%d\n",gc);
}
}
return 0;
}
