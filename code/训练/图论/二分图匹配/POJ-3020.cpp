#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<bitset>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cmath>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e3+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
string s[N];
int a[N][N],b[N][N];
int n,m;
int w[N][N],link[N],num;
bitset<N>vis;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int OK(int x,int y){return x>=1&&x<=n&&y>=1&&y<=m;}
int dfs(int x)
{
	for(int i=1;i<=num;i++){
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
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		s[i]=" "+s[i];
	}
	num=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=++num;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[i][j]=++num;
		}
	}
	int sum=0;
	memset(link,0,sizeof link);
	memset(w,0,sizeof w);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]!='*')continue;
			sum++;
			for(int k=0;k<4;k++){
				int xx=dx[k]+i;
				int yy=dy[k]+j;
				if(OK(xx,yy)&&s[xx][yy]=='*'){
					w[a[i][j]][b[xx][yy]]=1;
					// cout<<i<<" "<<j<<" && "<<xx<<" "<<yy<<endl;
				}
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n*m;i++){
		vis.reset();
		if(dfs(i))ans++;
	}
	cout<<sum-ans/2<<endl;
	// cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}