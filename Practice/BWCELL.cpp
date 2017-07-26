#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cntl,cntr;
		cntl=cntr=0;
		int l=s.length();
		int flagl,flagr;
		flagl=1;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='B' && flagl)
			{
				cntl++;
			}
			else if(s[i]=='W')
			{
				flagl=0;
				flagr=1;
			}
			else 
			{
				cntr++;
			}
		}
		if(cntr==cntl)
		{
			printf("Chef\n");
		}
		else
		{
			printf("Aleksa\n");
		}
	}
	return 0;
}
