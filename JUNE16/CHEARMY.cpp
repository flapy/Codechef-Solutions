//By Chirag Agarwal
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t; t=readInt();while(t--)
#define traverse(itr)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
#define N 1004
#define M 1004 
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
		lli k;
		scanf("%lld",&k);
		if(k==1)
		{
		    cout<<0<<endl;
		    continue;
		    
		}
		string str="";
		k--;
		while(k)
		{
			str+=to_string(k%5);
			k/=5;
		}
		int l=str.length();
		lli ans=0;
		lli mul=5;
		for(int i=l-1;i>=0;i--)
		{
			cout<<2*(str[i]-48);
		}
		cout<<endl;
	}
	return 0;
}
