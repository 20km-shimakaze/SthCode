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
#include<cmath>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
// #define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct poi
{
	int id,dis;
	friend bool operator<(poi a,poi b){
		return a.dis>b.dis;
	}
};
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
int n,m;
int dis[N];
void init()
{
	for(int i=1;i<=n;i++){
		dis[i]=INF;
	}
}
void dij(int s)
{
	priority_queue<poi>q;
	poi a,b;
	bitset<30004>vis;
	init();
	a.dis=0;
	a.id=s;
	dis[s]=0;
	q.push(a);
	while(q.size()){
		a=q.top();
		q.pop();
		int x=a.id;
		if(vis[x])continue;
		vis[x]=1;
		for(int i=head[x];i;i=e[i].next){
			int y=e[i].to;
			int w=e[i].w;
			if(dis[y]>dis[x]+w){
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
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		add(x,y,w);
	}
	int ans=0;
	dij(1);
	cout<<dis[n]<<endl;
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}