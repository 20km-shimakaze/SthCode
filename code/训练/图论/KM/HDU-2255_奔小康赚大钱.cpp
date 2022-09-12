#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=303;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int link[N],n,lx[N],ly[N];
int w[N][N];
bitset<N>vx,vy;
int dfs(int x)
{
    vx[x]=1;
    for(int i=1;i<=n;i++){
        if(!vy[i]&&lx[x]+ly[i]==w[x][i]){
            vy[i]=1;
            if(!link[i]||dfs(link[i])){
                link[i]=x;
                return 1;
            }
        }
    }
    return 0;
}
int KM()
{
    for(int i=1;i<=n;i++){
        lx[i]=-INF;
        ly[i]=0;
        link[i]=0;
        for(int j=1;j<=n;j++){
            lx[i]=max(lx[i],w[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        while(1){
            vx.reset();
            vy.reset();
            if(dfs(i))break;
            int d=INF;
            for(int j=1;j<=n;j++){
                if(vx[j]){
                    for(int k=1;k<=n;k++){
                        if(!vy[k])d=min(d,lx[j]+ly[k]-w[j][k]);
                    }
                }
            }
            if(d==INF){
                cout<<"T_T"<<endl;
                return -1;
            }
            for(int j=1;j<=n;j++)if(vx[j])lx[j]-=d;
            for(int j=1;j<=n;j++)if(vy[j])ly[j]+=d;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)ans+=w[link[i]][i];
    return ans;
}
void solve()
{
    while(cin>>n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>w[i][j];
            }
        }
        cout<<KM()<<endl;
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