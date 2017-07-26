#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	pair<int ,int> p[100005];
    	int n,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		int x,y;
    		scanf("%d %d",&x,&y);
    		p[i]=make_pair(x,y);
    	}
    	int q,x1,y1,ind;
    	scanf("%d",&q);
    	while(q--)
    	{
    		char s[4];
    		scanf("%s",s);
    		if(s[0]=='U')
    		{
    			scanf("%d %d %d",&ind,&x1,&y1);
    			p[ind].first=x1;
    			p[ind].second=y1;
    		}
    		else
    		{
    			int r,s,j;
    			long long int max1=0;
    			scanf("%d %d",&r,&s);
    			for(i=r;i<=s;i++)
    			{
    				int w,z,w1,z1;
    				w=p[i].first;z=p[i].second;
    				//printf("%d %d\n",w,z);
    				if(i==r)
    				{
    					max1=0;
    				}
    				for(j=i+1;j<=s;j++)
    				{
    					w1=p[j].first;z1=p[j].second;
    				//	printf("%lld %lld\n",w1,z1);
    					//printf("Ans %d %d\n",,);
    					long long int a1=abs(w-w1);
    					long long int a2=abs(z-z1);
    				//	printf("%d\n",abs(w-w1)+abs(z-z1));
    					max1=max(a1+a2,max1);
    				}
    			}
    			printf("%lld\n",max1);
    		}
    	}
    	return 0;
    }
