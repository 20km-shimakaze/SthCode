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
int n,m;
vector<int>v[N];
int vis[N];
int cnt[N][2],fll;
int iscol[N];
void dfs(int x,int fa,int fl,int col)
{
	if(vis[x])return;
	vis[x]=fl+1;
	cnt[col][fl]++;
	iscol[x]=col;
	for(int y:v[x]){
		if(y==fa)continue;
		if(vis[y]==(fl+1))fll=1;
		dfs(y,x,fl^1,col);
	}
}
void solve()
{
	cin>>n>>m;
	int ans=0;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int col=0;
	for(int i=1;i<=n;i++){
		if(!vis[i])col++;
		dfs(i,0,1,col);
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==2){
			ans+=cnt[iscol[i]][0]-v[i].size();
			ans+=(n-cnt[iscol[i]][0]-cnt[iscol[i]][1]);
		}
		else{
			ans+=cnt[iscol[i]][1]-v[i].size();
			ans+=(n-cnt[iscol[i]][0]-cnt[iscol[i]][1]);
		}
	}
	if(fll)ans=0;
	cout<<ans/2<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}