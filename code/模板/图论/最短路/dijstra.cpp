#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int dis[10004],vis[10004];
int n,m,s,t,a,b,v;
struct node
{
    int id,dis;
    friend bool operator < (node a,node b){
        return a.dis<b.dis;
    }
};
struct poi
{
    int a,v;
};
struct pp
{
    int a,b;
};
map<pp,int>mp;
vector<poi>vec[10004];
void dij()
{
    priority_queue<node>q;
    q.push(node{s,0});
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    dis[s]=0;
    while(!q.empty()){
        node a=q.top();
        q.pop();
        int now=a.id;
        if(vis[now])continue;
        vis[now]=1;
        for(int i=0;i<vec[now].size();i++){
            int j=vec[now][i].a;
            int di=vec[now][i].v;
            if(dis[now]+di<dis[j]){
                dis[j]=dis[now]+di;
                q.push(node{j,dis[j]});
            }
        }
    }
}
void slove()
{
    cin>>n>>m;
    poi tt;
    pp aa;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        tt.a=b;
        tt.v=1;
        aa.a=a;
        aa.b=b;
        //  if(mp.count(aa))continue;
        //  mp[aa]++;
        vec[a].push_back(tt);
        tt.a=a;
        vec[b].push_back(tt);
    }
    cin>>s>>t;
    dij();
    if(dis[t]!=INF){
        cout<<dis[t]<<endl;
    }
    else cout<<-1<<endl;
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)slove();
}