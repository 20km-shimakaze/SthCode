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
int s[1003][1003],n,m;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int check1(int x,int y)
{
	for(int i=0;i<4;i++){
		int xx=dx[i]+x;
		int yy=dy[i]+y;
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&s[x][y]==s[xx][yy])return 1;
	}
	return 0;
}
int vis[N];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
		}
	}
	int ans=0;
	for(int i=2;i<=n;i++){
		int fl=0;
		for(int j=1;j<=m;j++){
			if(!check1(i-1,j))fl=1;
		}
		if(fl){
			vis[i]=1;
			for(int j=1;j<=m;j++)s[i][j]^=1;
		}
	}
	int fl=0;
	// cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!check1(i,j))fl=1;
			// cout<<s[i][j]<<" ";
		}
		// cout<<endl;
	}
	int ans1=0;
	int num=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==1){
			num++;
		}
		else{
			ans1+=(num+2)/3;
			num=0;
		}
	}
	ans1+=(num+2)/3;
	if(fl)cout<<"-1"<<endl;
	else cout<<ans1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}