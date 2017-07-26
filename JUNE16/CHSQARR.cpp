//By Chirag Agarwal
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;while(t--)
#define traverse(itr)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
#define N 1004
#define M 1004 
int dp[N][M];
int arr[N][M];
int copy[N][M];
int ST[12][12][M][N];
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
int n,m;
void preCompute()
{
	for(int j=0;j<m;j++)
	{
		dp[0][j]=arr[0][j];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			dp[i][j]=arr[i][j]+dp[i-1][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			dp[i][j]+=dp[i][j-1];
		}
	}
}
int getSum(int a1,int b1,int a2,int b2)
{
	int sum = dp[a2][b2];
	if(a1)
		sum-=dp[a1-1][b2];
	if(b1)
		sum-=dp[a2][b1-1];
	if(a1 && b1)
		sum+=dp[a1-1][b1-1];
	return sum;
}
int maxi(int n_args, ...)
{
    va_list ap;
    va_start(ap, n_args);
    int max = va_arg(ap, int);
    for(int i = 2; i <= n_args; i++) {
        int a = va_arg(ap, int);
        if(a > max) max = a;
    }
    va_end(ap);
    return max;
}
void makeSparseTable()
{
	for(int i=0; (1<<i) <= n; i++)
	{
        for(int j=0; (1<<j) <= m; j++)
    	{
            for(int x=0; x + (1<<i)-1 < n; x++)
         	{
                for(int y = 0; y + (1<<j) -1 < m; y++)
                {
                    if (i == 0 && j == 0)
                            ST[i][j][x][y] = arr[x][y]; 
                    else if (i == 0)
                            ST[i][j][x][y] = maxi(2,ST[i][j-1][x][y], ST[i][j-1][x][(y+(1<<(j-1)))]);
                    else if (j == 0)
                            ST[i][j][x][y] = maxi(2,ST[i-1][j][x][y], ST[i-1][j][(x+ (1<<(i-1)))][y]);
                    else 
                            ST[i][j][x][y] = maxi(4,ST[i-1][j-1][x][y], ST[i-1][j-1][(x + (1<<(i-1)))][y], ST[i-1][j-1][x][(y+(1<<(j-1)))], ST[i-1][j-1][(x + (1<<(i-1)))][(y+(1<<(j-1)))]);
                  }
              }
          }
      }
}
int main()
{
	n=readInt();
	m=readInt();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=readInt();
		}
	}
	preCompute();
	int q=readInt();
	makeSparseTable();
	while(q-->0)
	{
		int a,b;
		a=readInt();
		b=readInt();
		int ans=MAX;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i+a>n || j+b>m)
					break;
				//cout<<i<<" "<<j<<endl;
				int x=i;
				int y=j;
				int x1=i+a-1;
				int y1=j+b-1;
				//cout<<x<<" "<<y<<endl<<x1<<" "<<y1<<endl;
				//cout<<"YAYA\n";
				int k = 31-__builtin_clz(x1 - x + 1);
                int l = 31-__builtin_clz(y1 - y + 1);
                int max_e = maxi(4,ST[k][l][x][y], ST[k][l][(int)(x1 - (1<<k) + 1)][y], ST[k][l][x][(int)(y1 - (1<<l) + 1)], ST[k][l][(int)(x1 - (1<<k) + 1)][(int)(y1 - (1<<l) + 1)]);
        		//cout<<"Element is "<<max_e<<endl;
        		//cout<<getSum(x,y,x1,y1)<<endl;
        		ans=min(max_e*a*b-getSum(x,y,x1,y1),ans);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
