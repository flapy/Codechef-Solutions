#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;t=readInt();while(t--)
#define traverse(itr)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main()
{
	init
	{
		int n,m;
		n=readInt();
		m=readInt();
		string a[102];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		for(int j=0;j<m;j++)
		{
			int cnt=0;
			for(int i=0;i<n;i++)
			{
				if(a[i][j]=='1')
				{
					cnt++;
				}
			}
			ans=ans+(cnt*(cnt-1))/2;
		}
		cout<<ans<<endl;
	}	
	return 0;
}
