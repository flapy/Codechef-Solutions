#include<bits/stdc++.h>
using namespace std;
int parent[200004];
int rnk[200004];
int find(int u)
{
	if(u==parent[u])
		return u;
	return parent[u]=find(parent[u]);
}
    #define inchar getchar_unlocked
        #define pc putchar_unlocked
    inline int inp() {
	int n, ch;
	while ((ch = inchar()) < '0');
	n = (ch - '0');
	while ((ch = inchar()) >= '0')
		n = (n << 3) + (n << 1) + (ch - '0');
	return n;
}
void merge(int x,int y)
{
 
        if (rnk[x] > rnk[y])
            parent[y] = x;
        else
            parent[x] = y;
 
        if (rnk[x] == rnk[y])
            rnk[y]++;
}
int main()
{
	int n,m;
	n=inp();
	m=inp();
	int arr[n+2];
	list<int> adj[200004];
	map<int,list<int> > ma;
	for(int i=1;i<=n;i++)
	{
		arr[i]=inp();
		ma[arr[i]].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		parent[i]=i;
		rnk[i]=0;
	}
	while(m--)
	{
		int u,v;
		u=inp();
		v=inp();
		adj[u].push_back(v);
		adj[v].push_back(u);
		 u=find(u);
		 v=find(v);
		if(u!=v)
		merge(u,v);
	}
	bool vis[200005]={false};
	map<int,list<int> >::iterator itr;
	long long int final_cnt=0;
	for(itr=ma.begin();itr!=ma.end();itr++)
	{
		list<int> temp=itr->second;
		list<int> ::iterator itrn;
		map<int, int> freq;
		for(itrn=temp.begin();itrn!=temp.end();itrn++)
		{	
			freq[find(*itrn)]++;
		}
		map<int,int> ::iterator itr1;
		if(freq.size()>1)
		{
			int y=0;
			long long int ans=0;
			int fg=0;
            int till=0;
			for(itr1=freq.begin();itr1!=freq.end();itr1++)
			{
				if(!fg)
				{
					ans+=itr1->second;
                    till=ans;
					fg=2;
				}
				else if(fg==2)
				{
					ans=ans*itr1->second;
                    till+=itr1->second;
					fg++;
				}
				else
				{
					ans+=till*itr1->second;
                    till+=itr1->second;
				}
			}
			final_cnt+=ans;
		}
	}
	long long int ans=final_cnt;
	//cout<<ans<<endl;
	bool visit[200005]={false};
	map<int,vector<int> > lis;
	for(int i=1;i<=n;i++)
	{
		int pa=parent[i];
		if(!visit[i])
		{
			queue<int> q;
			q.push(i);
			int w=0;
			visit[i]=true;
			lis[pa].push_back(i);
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				list<int> ::iterator itr;
				for(itr=adj[u].begin();itr!=adj[u].end();itr++)
				{
					if(!visit[*itr])
					{
						lis[pa].push_back(*itr);
						q.push(*itr);
						visit[*itr]=true;	
					}
				}
			}
		}
	}
	long long int net=0;
	int new_vis[200005]={0};
	for(int i=1;i<=n;i++)
	{
		vector<int> neigh=lis[parent[i]];
		int cnt=0;
		vector<int> ::iterator itr4;
		//This is 69!
		net=0;
		for(itr4=neigh.begin();itr4!=neigh.end();itr4++)
		{	
			if(*itr4==i)
				continue;
			if(arr[i]==arr[*itr4])
			{
				net++;
			}
		}
		int r=0;
		int flag=0;
		map<int,map<int,int> > sals;
		for(itr4=neigh.begin();itr4!=neigh.end();itr4++)
		{
			if(*itr4==i)
				continue;
			//cout<<"I am a neigh "<<*itr4<<endl;
			if(new_vis[*itr4]!=i)
			{
				queue<int> q;
				q.push(*itr4);
				cnt++;
				bool flag=false;
				new_vis[*itr4]=i;
				sals[arr[*itr4]][cnt]++;
				while(!q.empty())
				{
					int u=q.front();
					//cout<<"Same "<<u<<endl;
					q.pop();
					list<int> ::iterator itr;
					for(itr=adj[u].begin();itr!=adj[u].end();itr++)
					{
						if(*itr!=i && new_vis[*itr]!=i)
						{
							q.push(*itr);
							//cout<<"Arr is "<<arr[*itr]<<endl;
							sals[arr[*itr]][cnt]++;
							new_vis[*itr]=i;
						}
					}
				}
			}
		}
		map<int,map<int,int> > ::iterator itr6;
		long long int sum=0;
		int flg=0;
		for(itr6=sals.begin();itr6!=sals.end();itr6++)
		{
			map<int,int> temp=itr6->second;
			map<int,int> ::iterator itr7;
			//cout<<itr6->first<<endl;
			if(temp.size()>1)
			{
                		int till=0;
				for(itr7=temp.begin();itr7!=temp.end();itr7++)
				{
				    //cout<<itr7->first<<" "<<itr7->second<<endl;
					if(!flg)
					{
                        			till=itr7->second;
						sum+=itr7->second;
						flg=2;
					}
					else if(flg==2)
					{
                        			till+=itr7->second;
						sum=sum*itr7->second;
						flg++;
					}
					else
					{
						sum+=till*itr7->second;
                         			till+=itr7->second;
					}
				}
			}
			//cout<<endl;
		}
		//cout<<sum<<" SUS "<<endl;
		//cout<<ans+sum+net<<endl;
		printf("%lld\n",ans+sum+net);
	}
	return 0;
}
