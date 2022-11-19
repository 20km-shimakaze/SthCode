#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int dis[N][2],vis[N][2];
int n,k,m;
struct Edge
{
	int to,next,w;
}e[N];
int head[N],cnt;
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
map<int,int>mp;
struct node
{
	int id,num,su;
};
void solve()
{
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		int x,y,a;
		cin>>x>>y>>a;
		add(x,y,a);
		add(y,x,a);
	}
	for(int i=1;i<=k;i++){
		int x;
		cin>>x;
		mp[x]=1;
	}
	// memset(dis,0x3f,sizeof(dis));
	queue<node>q;
	q.push({1,0,0});
	dis[1][0]=0;
	while(q.size()){
		auto[id,num,su]=q.front();
		q.pop();
		if(id==n){
			cout<<su<<endl;
			return;
		}
		if(vis[id][num])continue;
		vis[id][num]=1;
		int fl=mp.count(id);
		for(int i=head[id];i;i=e[i].next){
			int to=e[i].to;
			int w=e[i].w;
			if(w^num){
				q.push({to,num,su+1});
			}
			else if(fl){
				q.push({to,num^1,su+1});
			}
		}
	}
	cout<<-1<<endl;
}
signed main()	
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}