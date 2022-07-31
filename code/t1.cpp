#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int INF=4557430888798830399;
int n,m,k;
int dp[303][303];
int a[1000],su[1000];
int dfs(int l,int r)
{
    int &res=dp[l][r];
    if(res!=INF)return res;
    if(l==r)return 0;
    for(int i=l;i<r;i++){
        res=min(res,dfs(l,i)+dfs(i+1,r)+su[r]-su[l-1]);
    }
    return res;
}
void solve()
{
	cin>>n;
    memset(dp,0x3f,sizeof(dp));
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)su[i]=su[i-1]+a[i];
    cout<<dfs(1,n)<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}