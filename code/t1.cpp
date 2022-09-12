#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
int s[N];
int vis[N];
int dfs(int a,int b,int num,int fl)
{
    if(num==n){
        if(a==b)return 1;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        vis[i]=1;
        int t;
        if(fl)t=dfs(a+s[i],b,num+1,fl^1);
        else t=dfs(a,b+s[i],num+1,fl^1);
        vis[i]=0;
        if(t==0)return 1;
    }
    return 0;
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    cout<<dfs(0,0,0,1)<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}