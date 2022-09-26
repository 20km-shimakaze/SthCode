#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
vector<int>v[N];
int n,s,t;
int fa[N];
int fl=0;
void dfs(int x,int f)
{
	if(x==t){
		if(fl)return;
		int di=x;
		while(fa[di]){
			cout<<di<<" ";
			di=fa[di];
		}
		fl=1;
		return;
	}
	for(int y:v[x]){
		if(y==f)continue;
		fa[y]=x;
		dfs(y,x);
	}
}
void solve()
{
	cin>>n>>t>>s;
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(s,0);
	cout<<s<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}