#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
const int INF=0x3f3f3f3f3f3f3f3f;
int n,m;
struct node
{
    int id,dis;
    friend bool operator < (node a,node b){
        return a.dis>b.dis;
    }
};
struct poi
{
    int a,v;
};
vector<poi>v[N];
int dis[N];
int vis[N];
void dij()
{
    priority_queue<node>q;
    node a,b;
    a.dis=0;
    a.id=1;
    q.push(a);
    dis[1]=0;
    while(q.size()){
        a=q.top();
        q.pop();
        int x=a.id;
        if(vis[x])continue;
        vis[x]=1;
        for(int i=0;i<v[x].size();i++){
            int y=v[x][i].a;
            int w=v[x][i].v;
            if(dis[x]+w<dis[y]){
                dis[y]=dis[x]+w;
                b.dis=dis[y];
                b.id=y;
                q.push(b);
            }
        }
    }
}
void solve()
{
	while(cin>>n>>m,n||m){
        poi a;
        memset(dis,0x3f,sizeof(int)*(n+10));
        for(int i=1;i<=n;i++){
            v[i].clear();
            vis[i]=0;
        }
        for(int i=1;i<=m;i++){
            int x,y,c;
            cin>>x>>y>>c;
            a.v=c;
            a.a=x;
            v[y].push_back(a);
            a.a=y;
            v[x].push_back(a);
        }
        dij();
        cout<<dis[n]<<endl;
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