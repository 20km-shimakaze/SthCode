#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1003;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
int s[N][N];
int link[N];
bitset<N>vis;
int dfs(int x)
{
    for(int i=1;i<=2*n;i++){
        if(!vis[i]&&s[x][i]){
            vis[i]=1;
            if(!link[i]||dfs(link[i])){
                link[i]=x;
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        s[x][y+n]=1;
    }
    int num=0;
    for(int i=1;i<=2*n;i++){
        vis.reset();
        if(dfs(i))num++;
    }
    cout<<n-num<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}