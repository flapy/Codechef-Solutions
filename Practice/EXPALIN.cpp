#include <bits/stdc++.h>
using namespace std;
string str;
bool pal()
{
	int i=0;
	int l=str.length();
	l--;
	while(i<=l)
	{
		if(str[i]!=str[l])
		return false;
		i++;
		l--;
	}
	return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		int cnt=l;
		// for(int i=1;i<=l;i++)
		// {
		// 	for(int p=2;i*p<=l;p++)
		// 	{
		// 		int j=i;
		// 		string str=""+s[i-1];
		// 		while(p*j<=l)
		// 		{
		// 			j=j*p;
		// 			str+=s[j-1];
		// 			//cout<<str<<" ";
		// 			if(pal(str))
		// 			cnt++;
		// 		}
		// 	}
		// }
			for(int i=1;i<=l;i++)
			{
				long long int idx;
				for(int p=2;i*p<=l;p++)
				{
					idx=i;
					str.clear();
					str+=s[idx-1];
					while(idx*p<=l)
					{
						idx*=p;
						str+=s[idx-1];
						if(pal())
						cnt++;
					}
				}
			}
		cout<<cnt<<endl;
	}
	return 0;
}
