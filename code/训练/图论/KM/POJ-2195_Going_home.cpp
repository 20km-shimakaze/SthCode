#include <iostream>
#include<vector>
#include<bitset>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
//#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=105;
const int mod=998244353;
const int INF=0x3f3f3f3f;
int lx[N],ly[N],link[N],slack[N];
char s[N][N];
int a[N][N];
bitset<N>vis,vx,vy;
int n,m;
struct poi
{
    int x,y;
}peo[N],hom[N];
int cntp,cnth;
int dfs(int x)
{
    //cout<<"*";
    vx[x]=1;
    for(int i=1;i<=m;i++){
        if(!vy[i]&&lx[x]+ly[i]==a[x][i]){
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
            lx[i]=max(lx[i],a[i][j]);
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
                    for(int k=1;k<=m;k++){
                        if(!vy[k])d=min(d,lx[j]+ly[k]-a[j][k]);
                    }
                }
            }
            if(d==INF){
                cout<<"T_T"<<endl;
                return -1;
            }
            for(int j=1;j<=n;j++)if(vx[j])lx[j]-=d;
            for(int j=1;j<=m;j++)if(vy[j])ly[j]+=d;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)ans+=a[link[i]][i];
    return ans;
}
void solve()
{
    while(scanf("%d%d",&n,&m),n||m){
        cnth=cntp=0;
        vis.reset();
		getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%c",&s[i][j]);
				P p;
				p.first=i,p.second=j;
                if(s[i][j]=='m')peo[++cntp].x=i,peo[cntp].y=j;
                if(s[i][j]=='H')hom[++cnth].x=i,hom[cnth].y=j;
            }
			getchar();
        }
        n=m=cntp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                a[i][j]=abs(peo[i].x-hom[j].x)+abs(peo[i].y-hom[j].y);
                a[i][j]=-a[i][j];
            }
        }
        printf("%d\n",-KM());
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