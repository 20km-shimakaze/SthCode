#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=400;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
int lx[N],ly[N],w[N][N],link[N];
int fa[N];
bitset<N>vis,vv;
int dfs(int x)
{
	for(int i=1;i<=2*n;i++){
		if(!vis[i]&&w[x][i]){
			vis[i]=1;
			if(!link[i]||dfs(link[i])){
				link[i]=x;
				link[x]=i;
				fa[i]=x;
				return 1;
			}
		}
	}
	return 0;
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		w[x][y+n]=1;
		//w[y][x+n]=1;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		vis.reset();
		if(!dfs(i)){
			ans++;
		}
	}
	for(int i=1;i<=n;i++){
		int di=i+n;
		int fl=0;
		while(di){
			if(!vis[di-n])cout<<di-n<<" ",fl=1;;
			vis[di-n]=1;
			di=link[di-n];
		}
		if(fl)cout<<endl;
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