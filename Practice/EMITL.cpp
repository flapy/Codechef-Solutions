#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		map<char,int> m;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
			m[s[i]]++;
		}
		if(m['L']>=2 && m['T']>=2 && m['I']>=2 && m['M']>=2 && m['E']>=2)
		{
			cout<<"YES\n";
		} 
		else if(l==9 && m['L']>=2 && m['T']>=2 && m['I']>=2 && m['M']>=2 && m['E']>=1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}
