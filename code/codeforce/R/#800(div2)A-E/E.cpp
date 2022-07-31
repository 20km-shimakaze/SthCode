#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
vector<int> v[200005];
int n,m;
int vis[200005];
int ans[200005];
void solve()
{
    cin>>n>>m;
    int x,y;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[y].push_back(x);
        vis[x]++;
    }
    fill(ans,ans+n+1,0x3f3f3f);
    set<P>se;
    se.insert({0,n});
    while(se.size()){
        auto [x,u]=*se.begin();
        se.erase(se.begin());
        if(x>ans[u])continue;
        ans[u]=x;
        for(int t:v[u]){
            if(ans[t]!=0x3f3f3f)continue;
            se.insert({ans[u]+vis[t],t});
            vis[t]--;
        }
    }
    cout<<ans[1]<<endl;
}
signed main()
{
	int __;
	//cin >> __;
	__=1;
	while (__--)
		solve();
}