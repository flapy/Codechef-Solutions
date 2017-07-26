#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char s1[103],s2[104];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s %s",s1,s2);
		int l1=strlen(s1);
		int cnt=0;
		for(int i=0;i<l1;i++)
		{
			if(s1[i]=='?')
			{
				cnt++;
				continue;
			}
			if(s2[i]=='?')
			{
				cnt++;
				continue;
			}
			if(s1[i]!=s2[i])
			{
				cnt++;	
			}
		}
		int max=cnt;
		cnt=0;
		for(int i=0;i<l1;i++)
		{
			if(s1[i]=='?')
			{
				continue;
			}
			if(s2[i]=='?')
			{
				continue;
			}
			if(s1[i]!=s2[i])
			{
				cnt++;	
			}	
		}
		printf("%d ",cnt);
		printf("%d\n",max);
	}
	return 0;
}
