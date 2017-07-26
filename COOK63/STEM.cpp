#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int test,n,i,j,flag,k;
	string calc;
	cin>>test;
	string a[100005];
	string final;
	while(test--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int l=a[0].length();
		bool ft=false;
		int len;
		for(i=0;i<l;i++)
		{
			calc="";
			for(j=i;j<l;j++)
			{
				calc+=a[0][j];
				flag=1;
				for(k=0;k<n;k++)
				{
					int found=a[k].find(calc);
					if(found==-1)
					{
						flag=0;
						break;
					}
				}
				if(flag)
				{
					if(ft==false)
					{
						ft=true;
						final=calc;
						len=calc.length();
					}
					else
					{
						if(calc.length()==len)
						{
							if(calc<final)
							final=calc;
						}
						else if(calc.length()>len)
						{
							len=calc.length();
							final=calc;
						}
						else
						{
							
						}
					}
 
				}
			}
		}
		cout<<final<<endl;
	}
	return 0;
}
