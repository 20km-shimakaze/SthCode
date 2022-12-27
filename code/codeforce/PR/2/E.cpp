#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N],b[N],f[2][N];
vector<int>v[N];
int n,d;
void dfs1(int u,int fa,int dis)
{
	a[dis]=u;
	if(dis-d>0)b[u]=a[dis-d];
	else b[u]=1;
	for(int y:v[u]){
		if(y==fa)continue;
		dfs1(y,u,dis+1);
	}
}
void dfs2(int u,int fa,int flag)
{
	for(int y:v[u]){
		if(y==fa)continue;
		dfs2(y,u,flag);
		if(f[flag][y])f[flag][u]=1;
	}
}
void solve()
{
	cin>>n>>d;
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs1(1,0,0);
	for(int i=0;i<=1;i++){
		int m;
		cin>>m;
		for(int j=1;j<=m;j++){
			int x;
			cin>>x;
			f[i][x]=1;
			f[i^1][b[x]]=1;
		}
	}
	dfs2(1,0,1);
	dfs2(1,0,0);
	int ans=0;
	for(int i=0;i<=1;i++){
		for(int j=2;j<=n;j++){
			if(f[i][j]){
				ans+=2;
				// cout<<"flag="<<i<<" "<<"d="<<j<<endl;
			}
		}
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