#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=100+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int w[N][N],n,m;
P link[N][N];
bitset<N>vis[N];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int OK(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n)return 1;
    return 0;
}
int dfs(P p)
{
    int x=p.first;
    int y=p.second;
    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(!OK(xx,yy)||w[xx][yy])continue;
        if(!vis[xx][yy]){
            vis[xx][yy]=1;
            if((!link[xx][yy].first&&!link[xx][yy].second)||dfs(link[xx][yy])){
                link[xx][yy]=p;
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
        w[x][y]=1;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(w[i][j])continue;
            if((i+j)%2==0){
                for(int k=1;k<=n;k++)vis[k].reset();
                if(dfs({i,j}))ans++;
            }
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