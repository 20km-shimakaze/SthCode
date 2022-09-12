#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n;
struct poi
{
    int t,x,a;
}s[N];
struct POI
{
    int x,st,w,id;
};
queue<POI>q;
int dp[N][5];
void solve()
{
	cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)cin>>s[i].t>>s[i].x>>s[i].a;
    for(int i=1;i<=n;i++){
        int x=s[i].x,t=s[i].t,a=s[i].a,tt=s[i-1].t;
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(abs(k-j)<=t-tt){
                    dp[i][j]=max(dp[i][j],dp[i-1][k]);
                }
            }
        }
        if(x<=t)dp[i][x]+=a;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<5;j++){
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}