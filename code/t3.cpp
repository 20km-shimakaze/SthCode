#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int dp[1000][1000];
int n,p;
int dfs(int l,int r)
{
    int &res=dp[l][r];
    if(res!=0)return res;
    if(l==r)return res=1;
    for(int i=l+1;i<=r;i++){
        if(i*p<r)continue;
        int t=dfs(l,i-1);
        if(t==-1)return res=1;//N
    }
    return res=-1;//P
}
void solve()
{
    int n=20;p=100;
	for(int l=1;l<=n;l++){
        for(int r=1;r<=n;r++){
            if(r>=l)printf("%2lld",dfs(l,r));
            else cout<<"* ";
        }
        puts("");
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}