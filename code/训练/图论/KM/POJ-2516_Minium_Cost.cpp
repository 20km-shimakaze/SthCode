//δ�깤
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
const int N=53;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int lx[N],ly[N],w[N][N][N],a[N][N],link[N],num,su[N][N],chk[N],chu[N];
bitset<N>vx,vy;
int n,m,k,id;
int flag;
int dfs(int x)
{
    vx[x]=1;
    for(int i=1;i<=num;i++){
        if(!vy[i]&&lx[x]+ly[i]==w[id][x][i]){
            vy[i]=1;
            if(!link[i]||dfs(i)){
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
        for(int j=1;j<=num;j++){
            lx[i]=max(lx[i],w[id][i][j]);
        }
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
                        if(!vy[k])d=min(d,lx[j]+ly[k]-w[id][j][k]);
                    }
                }
            }
            if(d==INF){
                flag=1;
                return -1;
            }
            for(int j=1;j<=num;j++)if(vx[j])lx[j]-=d;
            for(int j=1;j<=num;j++)if(vy[j])ly[j]+=d;
        }
    }
    int ans=0;
    for(int i=1;i<=num;i++){
        ans+=w[id][link[i]][i];
    }
    return ans;
}
void solve()
{
    while(cin>>n>>m>>k,n||m||k){
        cout<<"--------------"<<endl;
        flag=0;
        for(int i=1;i<=k;i++)chk[i]=chu[i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                cin>>a[i][j];
                chk[j]+=a[i][j];
            }
        }
        cout<<"1111111111111"<<endl;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=k;j++){
                cin>>su[i][j];
                chu[j]+=su[i][j];
            }
        }
        cout<<"22222222222"<<endl;
        for(int i=1;i<=k;i++){
            if(chk[i]>chu[i]){
                cout<<-1<<endl;
                flag=1;
            }
        }
        for(int id=1;id<=k;id++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cin>>w[id][i][j];
                    w[id][i][j]=-w[id][i][j];
                }
            }
        }
        cout<<"3333333333"<<endl;
        cout<<"----------"<<endl;
        if(flag)continue;
        int ans=0;
        num=max(k,m);
        for(int i=1;i<=n;i++){
            id=i;
            ans-=KM();
        }
        if(flag)cout<<-1<<endl;
        else cout<<ans<<endl;
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