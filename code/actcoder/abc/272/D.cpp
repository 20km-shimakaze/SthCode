#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct poi
{
	int x,y,step;
};
queue<poi>q;
int s[403][403];
int vis[403][403];
int n,m;
int dx[4]={1,1,-1,-1};
int dy[4]={-1,1,-1,1};
vector<poi>v;
int check(int x,int y)
{
	return x>=1&&y>=1&&x<=n&&y<=n;
}
void solve()
{
	cin>>n>>m;
	s[1][1]=0;
	q.push({1,1,0});
	for(int i=0;i<=n;i++){
		int t=m-i*i;
		if((int)sqrt(t)*(int)sqrt(t)==t)v.push_back({(int)sqrt(t),i,0});
	}
	// for(auto [x,y,step]:v){
	// 	cout<<x<<" "<<y<<endl;
	// }
	while(q.size()){
		auto [x,y,step]=q.front();
		q.pop();
		if(vis[x][y])continue;
		vis[x][y]=1;
		for(int i=0;i<4;i++){
			for(int j=0;j<v.size();j++){
				int xx=v[j].x*dx[i]+x;
				int yy=v[j].y*dy[i]+y;
				if(check(xx,yy)&&!vis[xx][yy]){
					s[xx][yy]=step+1;
					q.push({xx,yy,step+1});
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(!(i==1&&j==1)&&s[i][j]==0)cout<<-1<<" ";
			else cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}