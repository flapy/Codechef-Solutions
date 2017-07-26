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
#define lli long long int
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
		int n;
		n=readInt();
		map<int,int> m;
		int k=0;
		set<int> se;
		int a[n+2];
		for(int i=0;i<n;i++)
		{
			a[i]=readInt();
			m[a[i]]++;
			if(m[a[i]]>=2)
			{
				se.insert(a[i]);
			}
		}
		int ans=MIN;
		for(int i=0;i<n;i++)
		{
			if(m[a[i]]>=4)
			{
				ans=max(a[i]*a[i],ans);
			}
		}
		set<int> ::iterator itr=se.end();
		if(se.size()>=2)
		{
			ans=max((*(--itr))*(*(--itr)),ans);
		}
		cout<<(ans==MIN?-1:ans)<<endl;
	}
	return 0;
}
