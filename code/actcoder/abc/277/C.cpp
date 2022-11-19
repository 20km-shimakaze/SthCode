#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
map<int,int>mp,rmp;
vector<int>v[N];
int vis[N],idx;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		if(!mp.count(x))mp[x]=++idx,rmp[idx]=x;
		if(!mp.count(y))mp[y]=++idx,rmp[idx]=y;
		v[mp[x]].push_back(mp[y]);
		v[mp[y]].push_back(mp[x]);
	}
	if(!mp.count(1))mp[1]=++idx,rmp[idx]=1;
	queue<int>q;
	q.push(mp[1]);
	int ans=1;
	while(q.size()){
		int x=q.front();
		q.pop();
		if(vis[x])continue;
		vis[x]=1;
		ans=max(ans,rmp[x]);
		for(int y:v[x]){
			q.push(y);
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