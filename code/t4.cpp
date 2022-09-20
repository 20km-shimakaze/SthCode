#include<stdio.h>
#include<string.h>
#include<iostream>
#include<bitset>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=275;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int lx[N],ly[N],a[N][N],link[N],w[N][N];
bitset<N>vx,vy;
int n,m,num,d;
int dfs(int x)
{
    vx[x]=1;
    for(int i=1;i<=n*m;i++){
        if(vy[i])continue;
        int t=lx[x]+ly[i]-w[x][i];
        if(t==0){
            vy[i]=1;
            if(!link[i]||dfs(link[i])){
                link[i]=x;
                return 1;
            }
        }
        else if(t<d)d=t;
    }
    return 0;
}
void KM()
{
    for(int i=1;i<=n*m;i++){
        link[i]=0;
        lx[i]=-INF;
        ly[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*m;j++){
            lx[i]=max(lx[i],w[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        while(1){
            vx.reset();
            vy.reset();
            d=INF;
            if(dfs(i))break;
            if(d==INF){
                return ;
            }
            for(int j=1;j<=n*m;j++)if(vx[j])lx[j]-=d;
            for(int j=1;j<=n*m;j++)if(vy[j])ly[j]+=d;
        }
    }
    double ans=0;
    for(int j=1;j<=n*m;j++)ans+=w[link[j]][j];
    printf("%.6f\n",-ans/n);
}
void solve()
{
    // cin>>n>>m;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&a[i][j]);
                a[i][j]=-a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int k=0;k<n;k++){
                    w[i][j+k*m]=a[i][j]*(k+1);
                }
            }
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n*m;j++){
        //         cout<<w[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        KM();
    }
}
signed main()
{
    //IOS
    // int __=1;
    // // cin >> __;
    // scanf("%d",&__);
    // while (__--)
        solve();
}