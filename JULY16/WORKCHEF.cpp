#include<bits/stdc++.h>
using namespace std;
bool foo(int j,int k)
{
	int temp=j;
	set<int> s;
	while(temp)
	{
		int r=temp%10;
		if(r && j%r==0)
			s.insert(r);
		temp/=10;
	}
	if(s.size()>=k)
		return true;
	return false;
}
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		int cnt=0;
		for(int j=l;j<=r;j++)
		{
			if(foo(j,k))
				cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
