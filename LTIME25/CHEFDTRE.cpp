#include<bits/stdc++.h>
    using namespace std;
    map<int,set<int> > s;
         #define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
    int main()
    {
    	int n,q;
    	n=read_int();
    	q=read_int();
    	for(int i=1;i<=n;i++)
    	{
    		s[i].insert(i);
    	}
    //	set<long long int> ::iterator iter;
    //	iter=s[1].begin();
    	int cnt=n+1;
    	while(q--)
    	{
    		char s1[10];
    		int a,b,k;
    		scanf("%s",s1);
    		if(s1[0]=='U')
    		{
    			a=read_int();
    			b=read_int();
    			set<int> ::iterator iter;
    			for(iter=s[a].begin();iter!=s[a].end();iter++)
    			{
    				s[cnt].insert(*iter);
    			}
    			for(iter=s[b].begin();iter!=s[b].end();iter++)
    			{
    				s[cnt].insert(*iter);
    			}
    			cnt++;
    		}
    		else
    		{
    			set<int> ::iterator iter;
    			a=read_int();
    			k=read_int();
    			iter=s[a].begin();
    			std::advance( iter,k-1);
    			printf("%d\n",*iter);
    		}
    	}
    	return 0;
    }
