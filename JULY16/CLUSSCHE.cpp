#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m,b,c;
        cin>>n>>m>>b>>c;
        int a[504][504];
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=n;j++)
                {
                        cin>>a[i][j];
                }
        }
        int power;
        int node[504];
        for(int i=0;i<m;i++)
        {
                //pair<int,pair<int,int> > p[b+4];
                for(int j=0;j<b;j++)
                {
                        cin>>node[j]>>power;    
                        //p[j]=make_pair(j+1,make_pair(node,power));       
                }
                for(int j=0;j<b;j++)
                        cout<<node[j]<<endl;
                fflush(stdout);
        }
        return 0;
}
