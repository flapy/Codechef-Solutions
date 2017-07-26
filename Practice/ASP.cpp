#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int test,n,val,i,f;
    	ios_base::sync_with_stdio(false);
    	pair<int,int> pa[100006];
    	cin>>test;
    	while(test--)
    	{
    		f=0;
    		cin>>n;
    		for(i=0;i<n;i++)
    		{
    			cin>>val;
    			pa[i]=make_pair(val,i);
    		}
    		sort(pa,pa+n);
    		for(i=0;i<n;i++)
    		{
    			if(abs(pa[i].second-i)<=1)
    			{
    				continue;
    			}
    			else
    			{
    				f=1;
    				cout<<"NO\n";
    				break;
    			}
    		}
    		if(!f)
    		cout<<"YES\n";
    	}
    	return 0;
    }
