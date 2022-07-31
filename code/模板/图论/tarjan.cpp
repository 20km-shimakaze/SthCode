//tarjan
//求强连通分量才要stack
//x是割点 	case 1: 非root点 && x->y && low[y]>=dfn[x]
//			case 2:  root点  && 有>=2个儿子
// x->y是桥 low[y]>dfs[x] 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
vector<int>vec[1000];
stack<int>s;
int vis[1000],dfn[1000],low[1000],t=0;
void dfs(int p)
{
	dfn[p]=low[p]=++t;
	vis[p]=1;
	s.push(p);
	for(int i=0;i<vec[p].size();i++){
		int x=vec[p][i];
		if(dfn[x]==0){
			dfs(x);
			low[p]=min(low[p],low[x]);
		}
		else if(vis[x]){
			low[p]=min(low[p],low[x]);
		}
	}
	int mm;
	if(dfn[p]==low[p]){
		while(1){
			mm=s.top();
			s.pop();
			cout<<mm<<" ";
			vis[mm]=0;
			if(mm==p)break;
		}
		puts("");
	}
}
void slove()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		vec[a].push_back(b);
	}
	for(int i=1;i<=n;i++){
		if(dfn[i]==0){
			dfs(i);
		}
	}
}
int main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--){
		slove();
	}
	return 0;
}