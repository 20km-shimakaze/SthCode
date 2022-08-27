//tarjan
//求强连通分量才要stack
//x是割点 	case 1: 非root点 && y->y && low[y]>=dfn[y]
//			case 2:  root点  && 有>=2个儿子
// y->y是桥 low[y]>dfs[y] 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
vector<int>vec[1000];
stack<int>s;
int vis[1000],dfn[1000],low[1000],t=0;
void dfs(int x)
{
	dfn[x]=low[x]=++t;
	vis[x]=1;
	s.push(x);
	for(int i=0;i<vec[x].size();i++){
		int y=vec[x][i];
		if(dfn[y]==0){
			dfs(y);
			low[x]=min(low[x],low[y]);
		}
		else if(vis[y]){
			low[x]=min(low[x],low[y]);
		}
	}
	int mm;
	if(dfn[x]==low[x]){
		while(1){
			mm=s.top();
			s.pop();
			cout<<mm<<" ";
			vis[mm]=0;
			if(mm==x)break;
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