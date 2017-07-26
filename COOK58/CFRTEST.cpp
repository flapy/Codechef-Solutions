#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,b;
		scanf("%lld",&n);
		set<long long int> s;
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&b);
			s.insert(b);
		}
		printf("%lld\n",s.size());
	}
	return 0;
}
