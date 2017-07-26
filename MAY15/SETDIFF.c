#include<stdio.h>
#define MOD 1000000007
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
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,i,j,arr[100005],test;
	test=read_int();
	while(test--)
	{
		n=read_int();
		for(i=0;i<n;i++)
		{
			arr[i]=read_int();
		}
		qsort(arr, n, sizeof(int), cmpfunc);
		long long int compute_power[100005],p;
		p=1;
		compute_power[0]=1;
		for(i=1;i<=n;i++)
		{
			p=(p*2)%MOD;
			compute_power[i]=p; 
		}
		long long int total=0,sum;
		for(i=0,j=n-1;i<n;i++,j--)
		{
			sum=(compute_power[i]-compute_power[j])%MOD;
			sum=(sum*arr[i])%MOD;
			total=(total+sum)%MOD;
		}
		printf("%lld\n",total);
	}
	return 0;
}
