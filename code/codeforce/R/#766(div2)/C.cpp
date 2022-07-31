#include<bits/stdc++.h>
using namespace std;
int vis[100005];
int ans[100005];
vector<int>v[100005];
int n,u,vv;
void dfs(int p,int fa,int fl)
{
    if(fl)ans[min(fa,p)]=2;
    else ans[min(fa,p)]=3;
    for(int i=0;i<v[p].size();i++){
        if(fa==v[p][i])continue;
        dfs(v[p][i],p,fl^1);
    }
}
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)vis[i]=0,v[i].clear();
    for(int i=1;i<n;i++){
        cin>>u>>vv;
        v[u].push_back(vv);
        v[vv].push_back(u);
        vis[u]++;
        vis[vv]++;
    }
    int be=0;
    for(int i=1;i<=n;i++){
        if(vis[i]>2){
            cout<<-1<<endl;
            return;
        }
        if(vis[i]==1)be=i;
    }
    dfs(be,100005,1);
    for(int i=1;i<n;i++){
        cout<<ans[i]<<" ";
    }
    puts("");
}
int main(){
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
    return 0;
}