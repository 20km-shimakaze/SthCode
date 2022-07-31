#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
const int mod=19650827;
int n;
int a[200005];
int dp[2003][2003];
int dfs(int l,int r)
{
    if(dp[l][r])return dp[l][r];
    if(r==0)return dp[l][r]=1;
    if(l){
        return dp[l][r]=dfs(l+1,r-1)+dfs(l-1,r);
    }
    else return dp[l][r]=dfs(l+1,r-1);
}
void solve()
{
    cin>>n;
    cout<<dfs(0,n)<<endl;
}
signed main()
{
	int __;
	//cin >> __;
	__=1;
	while (__--)
		solve();
}