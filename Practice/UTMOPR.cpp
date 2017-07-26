#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,k,sum=0,y,i;
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&y);
			sum+=y;
		}
		if(sum%2==0)
		{
			if(k==1)
			printf("odd\n");
			else
			printf("even\n");
		}
		else
		{
			printf("even\n");
		}
	}
	return 0;
}
