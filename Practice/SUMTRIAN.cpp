#include<bits/stdc++.h>  
using namespace std; int main() { int a[104][104],t,m,dp[104][104];scanf("%d",&t); while(t--) {	scanf("%d",&m); for(int i=0;i<=m;i++) for(int j=0;j<=i;j++) dp[i][j]=0; for(int i=1;i<=m;i++) for(int j=1;j<=i;j++) scanf("%d",&a[i][j]); for(int i=1;i<=m;i++)	for(int j=1;j<=i;j++) dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j-1]); int ma=dp[m][1];	for(int i=1;i<=m;i++) ma=max(dp[m][i],ma);printf("%d\n",ma);} return 0;}
