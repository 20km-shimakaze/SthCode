#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
map<int,int>dp;
int n,x;
void dfs(int p)
{
    if(to_string(p).size()==n){
        dp[p]=0;
        return;
    }
    dp[p]=-1;
    string s=to_string(p);
    int ans=INT_MAX;
    for(int i=0;i<s.size();i++){
        int t=(s[i]-'0')*p;
        if(dp.count(t)==0){
            dfs(t);
        }
        if(dp[t]==-1)continue;//不可能有答案
        else ans=min(ans,dp[t]+1);
    }
    if(ans>=INT_MAX)dp[p]=-1;
    else dp[p]=ans;
}
void solve()
{
	cin>>n>>x;
    dp[x]=-1;
    dfs(x);
    cout<<dp[x]<<endl;
}
signed main()
{
	int __;
	//cin >> __;
	__=1;
	while (__--)
		solve();
}