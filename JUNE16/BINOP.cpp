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
	string s1,s2;
	init
	{
		cin>>s1>>s2;
		int cnt[2]={0};
		int l=s1.length();
		int cnt1[2]={0};
		for(int i=0;i<l;i++)
		{
			if(s1[i]!=s2[i])
			{
				cnt[s2[i]-'0']++;
			}
			cnt1[s1[i]-'0']++;
		}
		if(!cnt1[0] || !cnt1[1])
			cout<<"Unlucky Chef\n";
		else
		{
			cout<<"Lucky Chef\n";
			cout<<min(cnt[0],cnt[1])+abs(cnt[1]-cnt[0])<<endl;
		}
	}
	return 0;
}
