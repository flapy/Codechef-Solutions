#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	int t,n,m;
    	cin>>t;
    	while(t--)
    	{
    		cin>>n>>m;
    		int a[100005];
    		for(int i=0;i<m;i++)
    		{
    			cin>>a[i];
    		}
    		sort(a,a+m);
    		int time=0;
    		long long int cnt=0;
    		int ch=0;
    		bool flag=false;
    		if(m==1)
    		{
    			cout<<0<<endl;
    			continue;
    		}
    		for(int i=0;i<m;i++)
    		{
    			while(a[i])
    			{
    				cnt++;
    				if(a[i]==1)
    				{
    					m--;
    				}
    				if(time==0)
    				{
    					time++;
    					ch+=2;
    				}
    				else
    				ch+=1;
    				if(ch>=m)
    				{
    					flag=true;
    					break;
    				}
    				a[i]--;
    			}
    			if(flag)
    			break;
    		}
    		cout<<cnt<<endl;
    	}
    	return 0;
    }
