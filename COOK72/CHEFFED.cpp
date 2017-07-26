#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define lli long long int
using namespace std;
int s(int i)
{
	int sum=0;
	while(i!=0)
	{
		sum+=(i%10);
		i/=10;
	}
	return sum;
}
int check(int i)
{
	return i+s(i)+s(s(i));
}
int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int st=n-100000;
	if(st<0)
		st=0;
	int cnt=0;
	for(;st<n;st++)
	{
		if(check(st)==n)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
