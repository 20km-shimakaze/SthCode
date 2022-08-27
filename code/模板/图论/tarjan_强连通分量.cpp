/*
tarjan求强联通分量
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt;
struct Edeg
{
	int to,next;
}edge[N];
void add(int from,int to)
{
	edge[++cnt].to=to;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
stack<int>st;
bitset<N>vis;
int low[N],dfn[N],idx;
int ans=0,num[N];//强联通分量个数,每个点分别归属编号
void tarjan(int x)
{
	low[x]=dfn[x]=++idx;
	st.push(x);
	vis[x]=1;
	for(int i=head[x];i;i=edge[i].next){
		int y=edge[i].to;
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
			vis[y]=0;
		}while(x!=y);
	}
}
void solve()
{
	
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}