#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int h,m;
		cin>>h>>m;
		int cnt=0;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<m;j++)
			{
				map<char,int> ma;
				string str=to_string(i)+""+to_string(j);
				int l=str.length();
				for(int k=0;k<l;k++)
				{
					ma[str[k]]++;
				}
				if(ma.size()==1)
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
