#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		set<int> s_ignore;
		set<int> s_track;
		int a,b;
		int m,n,k;
		scanf("%d %d %d",&n,&m,&k);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&a);
			s_ignore.insert(a);
		}
		int cnt=0;
		for(int i=0;i<k;i++)
		{
			scanf("%d",&b);
			if(s_ignore.find(b)!=s_ignore.end())
			cnt++;
			s_track.insert(b);
		}
		int cnt1=0;
		for(int i=1;i<=n;i++)
		{
			if(s_ignore.find(i)==s_ignore.end() && s_track.find(i)==s_track.end())
			cnt1++;
		}
		printf("%d %d\n",cnt,cnt1);
	}
	return 0;
}
