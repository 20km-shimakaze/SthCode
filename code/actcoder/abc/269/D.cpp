#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int dx[6]={-1,-1,0,0,1,1};
int dy[6]={-1,0,-1,1,0,1};

void solve()
{
	int n;
	cin>>n;
	map<P,bool>mp,vis;
	vector<P>v;
	queue<P>q;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
		mp[{x,y}]=1;
	}
	int ans=0;
	for(auto[x,y]:v){
		if(vis[{x,y}])continue;
		ans++;
		q.push({x,y});
		while(q.size()){
			auto[tx,ty]=q.front();
			q.pop();
			if(vis[{tx,ty}])continue;
			vis[{tx,ty}]=1;
			for(int i=0;i<6;i++){
				int xx=dx[i]+tx;
				int yy=dy[i]+ty;
				if(mp[{xx,yy}]){
					q.push({xx,yy});
				}
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