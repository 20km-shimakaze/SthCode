#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int a,b,c;
int dis[5005];
struct poi
{
    int b,v;
};
vector<poi>v[200005];
int vis[5005];
int now=1,tot,ans;
void solve()
{
    for(int i=2;i<=n;i++){
        dis[i]=INF;
    }
    for(int i=0;i<v[now].size();i++){
        dis[v[now][i].b]=min(dis[v[now][i].b],v[now][i].v);
    }
    while(++tot<n){
        int minn=INF;
        vis[now]=1;
        for(int i=1;i<=n;i++){
            if(!vis[i]&&minn>dis[i]){
                minn=dis[i];
                now=i;
            }
        }
        ans+=minn;
        for(int i=0;i<v[now].size();i++){
            int t=v[now][i].v;
            int bb=v[now][i].b;
            if(!vis[bb]&&dis[bb]>t){
                dis[bb]=t;
            }
        }
        //cout<<minn<<" "<<now<<endl;
    }
}
int main()
{
    cin>>n>>m;
    poi aa;
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        aa.b=b;
        aa.v=c;
        v[a].push_back(aa);
        aa.b=a;
        v[b].push_back(aa);
    }
    solve();
    for(int i=2;i<=n;i++){
        if(dis[i]==INF){
            cout<<"orz"<<endl;
            return 0;
        }
    }
    
    cout<<ans<<endl;
}