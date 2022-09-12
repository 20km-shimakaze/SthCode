#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=503;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m,k;
bitset<N>vis;
int w[N][N],num,link[N];
int dfs(int x)
{
    for(int i=1;i<=n;i++){
        if(!vis[i]&&w[x][i]){
            vis[i]=1;
            if(!link[i]||dfs(link[i])){
                link[i]=x;
                return  1;
            }
        }
    }
    return 0;
}
void solve()
{
    while(cin>>k,k){
        cin>>m>>n;
        memset(link,0,sizeof(link));
        memset(w,0,sizeof(w));
        for(int i=1;i<=k;i++){
            int x,y;
            cin>>x>>y;
            w[x][y]=1;
        }
        int ans=0;
        for(int i=1;i<=m;i++){
            vis.reset();
            if(dfs(i))ans++;
        }
        cout<<ans<<endl;
    }
}
signed main()
{
    IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}