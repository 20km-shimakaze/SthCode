#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt;
struct Edge
{
	int to,next;
}ed[N];
void add(int from,int to)
{
	ed[++cnt].to=to;
	ed[cnt].next=head[from];
	head[from]=cnt;
}
int n,m;
stack<int>st;
bitset<N>vis;
int dfn[N],low[N],idx;
int ans,col[N],w[N];	
int in[N];
void tarjan(int x)
{
	dfn[x]=low[x]=++idx;
	st.push(x);
	vis[x]=1;
	for(int i=head[x];i;i=ed[i].next){
		int y=ed[i].to;
		if(!dfn[y]){
			tarjan(y);
			low[x]=min(low[x],low[y]);
		}
		else if(vis[y])low[x]=min(low[x],dfn[y]);
	}
	if(low[x]==dfn[x]){
		int y;
		ans++;
		do{
			y=st.top();
			st.pop();
			col[y]=ans;
			w[ans]=min(w[ans],y);
			vis[y]=0;
		}while(x!=y);
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)w[i]=INT_MAX;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		add(u,v);
	}
	for(int i=1;i<=n;i++){
		if(!dfn[i])tarjan(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=head[i];j;j=ed[j].next){
			int y=ed[j].to;
			if(col[i]!=col[y])in[col[y]]++;
		}
	}
	vector<int>an;
	for(int i=1;i<=ans;i++){
		cout<<w[i]<<" ";
		if(!in[i]){
			an.push_back(w[i]);
		}
	}puts("");
	sort(an.begin(),an.end());
	cout<<an.size()<<endl;
	for(auto i:an)cout<<i<<" ";
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}