#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[26]={0},i,j;
		char s[100005];
		scanf("%s",s);
		int l=strlen(s);
		for(i=0;i<l;i++)
		{
			a[s[i]-'a']++;
		}
		pair<int,char> p[26];
		for(i=0;i<26;i++)
		{
			p[i]=make_pair(a[i],i+'a');
		}
		sort(p,p+26);
		reverse(p,p+26);
		int pos=0;
		char ans[100005];
		for(i=0;i<26;i++)
		{
			for(j=0;j<p[i].first;j++)
			{
				ans[pos]=p[i].second;
				pos=pos+2;
				if(pos>=l)
				pos=1;
			}
		}
		ans[l]='\0';
		bool flag=true;
		for(i=0;i<l-1;i++)
		{
			if(ans[i]==ans[i+1])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<ans<<"\n";
		else
		printf("-1\n");
	}
	return 0;
}
