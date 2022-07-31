#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
/*
º«“‰ªØdfs±©¡¶
*/
int n,m,k;
int mod=998244353;
int dp[3000][100];
int dfs(int p,int q)
{
    if(dp[p][q]!=0)return dp[p][q];
    if(q==0||p==0){
        return dp[p][q]=1;
    }
    int sum=0;
    for(int i=0;i<=m-1&&p-i>=0;i++){
        sum+=dfs(p-i,q-1);
        sum%=mod;
    }
    return dp[p][q]=sum;
}
void solve()
{
	cin>>n>>m>>k;
    cout<<dfs(k-n,n)<<endl;
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}