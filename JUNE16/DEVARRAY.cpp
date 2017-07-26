//By Chirag Agarwal
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;while(t--)
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
	int n=readInt();
	int q=readInt();
	int arr,mi=MAX,ma=MIN;
	for(int i=0;i<n;i++)
	{
		arr=readInt();
		ma=max(ma,arr);
		mi=min(mi,arr);
	}
	while(q--)
	{
		int x;
		x=readInt();
		(x<=ma && x>=mi )?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}
