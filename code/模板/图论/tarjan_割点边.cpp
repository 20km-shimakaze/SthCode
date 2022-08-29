#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int vis[N],dfn[N],low[N],head[N],cnt,t;
int n,m;
struct Edge
{
	int to,next;
}edge[N];
void add(int from,int to)
{
	edge[++cnt].to=to;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
int ans[N];
void tarjan(int x,int fa)
{
	dfn[x]=low[x]=++t;
	int num=0;
	for(int i=head[x];i;i=edge[i].next){
		int y=edge[i].to;
		if(!dfn[y]){
			tarjan(y,fa);
			low[x]=min(low[x],low[y]);
			if(low[y]>=dfn[x]){//割点是>=，割边是>
				num++;
				if(x!=fa||num>1)ans[x]=1;//不是根节点或是根节点且儿子数大于1
			}
		}
		else low[x]=min(low[x],dfn[y]);
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	for(int i=1;i<=n;i++){
		if(!dfn[i]){
			tarjan(i,i);
		}
	}
	int num=0;
	for(int i=1;i<=n;i++)if(ans[i])num++;
	cout<<num<<endl;
	for(int i=1;i<=n;i++)if(ans[i])cout<<i<<" ";
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}