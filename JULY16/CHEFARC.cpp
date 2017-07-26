#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
int d1[2][101][101]={0};
bool visit[2][101][101]={false};
int n,m,a[101][101];
int readInt () {
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true) {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}
void bfs(int no,pair<int,int> p,int k)
{
    queue < pair<int,int > > q;
    q.push(p);
    d1[no][p.first][p.second]=0;
    visit[no][p.first][p.second]=true;
    while(!q.empty())
    {
        pair<int,int> p1=q.front();
        q.pop();
        int x=p1.first;
        int y=p1.second;
        //SE
        for(int i=x;i<=x+k && i<=n;i++)
        {
            for(int j=y;j<=y+k && j<=m;j++)
            {
                //cout<<i<<" "<<j<<endl;
                if(abs(x-i)+abs(y-j)<=k)
                {
                    if(!visit[no][i][j] && !a[i][j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        visit[no][i][j]=true;
                        d1[no][i][j]=d1[no][x][y]+1;
                        q.push(mp(i,j));
                    }   
                }
                else
                    break;
            }
        }
        //SW
        for(int i=x;i<=n && i<=x+k;i++)
        {
            for(int j=y;j>0 && j+k>=y;j--)
            {
                //cout<<i<<" "<<j<<endl;
                if(abs(x-i)+abs(y-j)<=k)
                {
                    if(!visit[no][i][j] && !a[i][j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        visit[no][i][j]=true;
                        d1[no][i][j]=d1[no][x][y]+1;
                        q.push(mp(i,j));
                    }   
                }
                else
                    break;  
            }
        }
        //NW
        for(int i=x;i>0 && i+k>=x;i--)
        {
            for(int j=y;j>0 && j+k>=y;j--)
            {
                if(abs(x-i)+abs(y-j)<=k)
                {
                    if(!visit[no][i][j] && !a[i][j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        visit[no][i][j]=true;
                        d1[no][i][j]=d1[no][x][y]+1;
                        q.push(mp(i,j));
                    }   
                }
                else
                    break;
            }
        }
        //NE
        for(int i=x;i>0 && i+k>=x;i--)
        {
            for(int j=y;j<=m && j<=y+k;j++)
            {
                if(abs(x-i)+abs(y-j)<=k)
                {
                    if(!visit[no][i][j] && !a[i][j])
                    {
                        //cout<<i<<" "<<j<<endl;
                        visit[no][i][j]=true;
                        d1[no][i][j]=d1[no][x][y]+1;
                        q.push(mp(i,j));
                    }   
                }
                else
                    break;
            }
        }
    }     
    //cout<<endl;
}
int main()
{
    int t;
    t=readInt();
    while(t--)
    {
        int k1,k2;
        n=readInt();
        m=readInt();
        k1=readInt();
        k2=readInt();
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                a[i][j]=readInt();
            }
        }  
        if(m==1)
        {
            printf("0\n");
            continue;
        }
        bfs(0,mp(1,1), k1);
        bfs(1,mp(1,m), k2);
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(visit[0][i][j] && visit[1][i][j])
                {
                    ans=min(ans,max(d1[0][i][j],d1[1][i][j])*2);
                }
            }
        }
        printf("%d\n",(ans==INT_MAX?-1:ans/2));
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<=n;j++)
            {
                for(int k=0;k<=m;k++)
                {
                    d1[i][j][k]=0;
                    visit[i][j][k]=false;
                }
            }
        }
    }
}
