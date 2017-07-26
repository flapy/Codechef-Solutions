#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100];
		scanf("%s",s);
		int n=strlen(s);
		map<char,int> m;
		for(int i=0;i<n;i++)
		{
			m[s[i]]++;
		}
		map<char,int> :: iterator i;
		bool ans=false;
		int sum=0;
		for(i=m.begin();i!=m.end();i++)
		{
			sum+=i->second;
		}
		for(i=m.begin();i!=m.end();i++)
		{
			int n=i->second;
			if(n==sum-n)
			{
				ans=true;
				break;
			}	
		}
		if(ans)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
