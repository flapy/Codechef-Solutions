#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define lli long long int
using namespace std;
bool check(int a,int b,int c,int d)
{
	
}
int main() {
	ios_base::sync_with_stdio(false);
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i!=j)
			{
				int ans1=a[i]*a[j];
				int ans2=1;
				for(int k=0;k<4;k++)
				{
					if(k!=i && k!=j)
					{
						ans2*=a[k];
					}
				}
				if(ans1==ans2)
				{
					cout<<"Possible\n";
					return 0;
				}
			}
		}
	}
	cout<<"Impossible\n";
	return 0;
}
