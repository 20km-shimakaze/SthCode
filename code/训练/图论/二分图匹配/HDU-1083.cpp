#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e3+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int w[N][N],link[N],num;
bitset<N>vis;
int n,m;
int dfs(int x)
{
	for(int i=1;i<=n;i++){
		if(!vis[i]&&w[x][i]){
			vis[i]=1;
			if(!link[i]||dfs(link[i])){
				link[i]=x;
				return 1;
			}
		}
	}
	return 0;
}
void solve()
{
	cin>>m>>n;
	memset(link,0,sizeof(link));
	memset(w,0,sizeof(w));
	for(int i=1;i<=m;i++){
		int k;
		cin>>k;
		for(int j=1;j<=k;j++){
			int x;
			cin>>x;
			w[x][i]=1;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		vis.reset();
		if(dfs(i))ans++;
	}
	if(ans==m)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}