#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
struct Edge
{
	int to,next,w;
}e[N];
int head[N],cnt=1;
int vis[N];
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
int dep[N];
bool bfs(int s,int t)
{
	memset(dep+1,0,sizeof(int)*(2*n+2));
	queue<int>q;
	dep[s]=1;
	q.push(s);
	while(q.size()){
		int x=q.front();
		q.pop();
		if(x==t)return true;
		for(int i=head[x];i;i=e[i].next){
			int y=e[i].to;
			int w=e[i].w;
			if(!dep[y]&&w>0){
				q.push(y);
				dep[y]=dep[x]+1;
			}
		}
	}
	return false;
}
int dfs(int x,int flow,int t)
{
	if(x==t)return flow;
	int out=flow;
	for(int i=head[x];i;i=e[i].next){
		int y=e[i].to;
		int w=e[i].w;
		if(w&&dep[x]+1==dep[y]){
			int tep=dfs(y,min(w,out),t);
			e[i].w-=tep;
			e[i^1].w+=tep;
			out-=tep;
			if(!out)break;
		}
	}
	if(out==flow)dep[x]=0;
	return flow-out;
}
int DINIC(int s,int t)
{
	int ans=0;
	while(bfs(s,t))ans+=dfs(s,INF,t);
	return ans;
}
void solve()
{
	cin>>n>>m;
	int s=2*n+1,t=2*n+2;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		add(x,y+n,1);
		add(y+n,x,0);
	}
	for(int i=1;i<=n;i++){
		add(s,i,1);
		add(i,s,0);
		add(i+n,t,1);
		add(t,i+n,0);
	}
	int ans=n-DINIC(s,t);
	for(int i=1;i<=n;i++){
		int di=i,fl=0;
		while(di){
			int ff=0;
			if(!vis[di]&&di<=n)cout<<di<<" ",fl=1;
			vis[di]=1;
			for(int j=head[di];j;j=e[j].next){
				if(e[j].w==0){
					di=e[j].to-n;
					ff=1;
					break;
				}
			}
			if(!ff)break;
		}
		if(fl)cout<<endl;
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


