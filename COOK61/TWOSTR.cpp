#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base:: sync_with_stdio(false);
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		char s[100005],s1[100005];
		cin>>s>>s1;
		bool flag;
		flag=true;
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(s[i]==s1[i])
			continue;
			else if(s[i] =='?' ||s1[i]=='?')
			continue;
			else
			{
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	return 0;
}
