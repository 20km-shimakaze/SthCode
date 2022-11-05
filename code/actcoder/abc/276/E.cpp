#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct poi
{
	int x,y,tot;
};
int n,m;
int OK(int x,int y)
{
	return x>=1&&y>=1&&x<=n&&y<=m;
}
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
void solve()
{
	cin>>n>>m;
	vector<vector<char>> mp(n+2,vector<char>(m+2,'#'));
	vector<vector<int>> vis(n+2,vector<int>(m+2,0));
	int sx,sy;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
			if(mp[i][j]=='S')sx=i,sy=j;
		}
	}
	queue<poi>q;
	for(int i=0;i<4;i++){
		int xx=sx+dx[i];
		int yy=sy+dy[i];
		if(OK(xx,yy)&&mp[xx][yy]!='#'){
			q.push({xx,yy,i+1});
		}
	}
	while(q.size()){
		auto[x,y,tot]=q.front();
		q.pop();
		if(vis[x][y])continue;
		vis[x][y]=tot;
		for(int i=0;i<4;i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(OK(xx,yy)&&mp[xx][yy]=='.'){
				if(vis[xx][yy]!=tot&&vis[xx][yy]!=0){
					cout<<"Yes"<<endl;
					return;
				}
				q.push({xx,yy,tot});
			}
		}
	}
	cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}