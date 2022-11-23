#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
vector<P>v[N];
int n,a,b;
map<int,int>mp;
void dfs1(int x,int fa,int num)
{
	mp[num]=1;
	for(auto [y,nu]:v[x]){
		if(fa==y||y==b)continue;
		dfs1(y,x,num^nu);
	}
}
int flag=0;
void dfs2(int x,int fa,int num){
	if(flag)return;
	if(mp.count(num)&&x!=b){
		cout<<"YES"<<endl;
		flag=1;
		return;
	}
	for(auto [y,nu]:v[x]){
		if(fa==y)continue;
		dfs2(y,x,num^nu);
	}
}
void solve()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)v[i].clear();
	for(int i=1;i<n;i++){
		int x,y,t;
		cin>>x>>y>>t;
		v[x].push_back({y,t});
		v[y].push_back({x,t});
	}
	mp.clear();
	dfs1(a,0,0);
	flag=0;
	dfs2(b,0,0);
	if(!flag)cout<<"NO"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}