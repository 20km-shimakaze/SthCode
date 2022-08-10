/*
正常dp
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=3e3+7;
int n,m,kk;
int a[N][N];
int dp[N][N][4];//在(i,j)用了k次的最大值
void solve()
{
	cin>>n>>m>>kk;
    for(int i=1;i<=kk;i++){
        int r,c,v;
        cin>>r>>c>>v;
        a[r][c]=v;
    }
    memset(dp,-1,sizeof(dp));
    dp[1][1][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=2;k>=0;k--){
                if(dp[i][j][k]!=-1)dp[i][j][k+1]=max(dp[i][j][k+1],dp[i][j][k]+a[i][j]);
            }
            for(int k=0;k<=3;k++){
                if(dp[i][j][k]>=0){
                    if(i+1<=n){
                        dp[i+1][j][0]=max(dp[i+1][j][0],dp[i][j][k]);
                    }
                    if(j+1<=m){
                        dp[i][j+1][k]=max(dp[i][j+1][k],dp[i][j][k]);
                    }
                }
            }
        }
    }
    int an=0;
    for(int i=0;i<=3;i++){
        an=max(an,dp[n][m][i]);
    }
    cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}