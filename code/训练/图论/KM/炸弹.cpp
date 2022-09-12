#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<bitset>
#include<queue>
#include<stack>
#include<map>
#include<set>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1003;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int lx[N],ly[N],w[N][N],link[N];
int n,m,num;
bitset<N>vx,vy;
int dfs(int x)
{
    vx[x]=1;
    for(int i=1;i<=num;i++){
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
    for(int i=1;i<=num;i++){
        link[i]=0;
        lx[i]=-INF;
        ly[i]=0;
    }
    for(int i=1;i<=num;i++){
        while(1){
            vx.reset();
            vy.reset();
            if(dfs(i))break;
            int d=INF;
            for(int j=1;j<=num;j++){
                if(vx[j]){
                    for(int k=1;k<=num;k++){
                        if(!vy[k])d=min(d,lx[j]+ly[k]-w[j][k]);
                    }
                }
            }
            if(d==INF){
                cout<<"T_T"<<endl;
                return -1;
            }
            for(int j=1;j<=num;j++)if(vx[j])lx[j]-=d;
            for(int j=1;j<=num;j++)if(vy[j])ly[j]+=d;
        }
    }
    int ans=0;
    for(int i=1;i<=num;i++)ans+=w[link[i]][i];
    return ans;
}
void solve()
{
    cin>>n>>m;
    num=n;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        w[x][y]=1;
    }
    cout<<KM()<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}