#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
struct poi
{
	int x,y,step,d;
};
vector<int>v[N];
int n,m,p,k;
int mp[1003][1003];
int id(int x,int y)
{
	return (x-1)*m+y;
}
int OK(int x,int y)
{
	return x>=1&&y>=1&&x<=n&&y<=m;
}
void solve()
{
	cin>>n>>m>>p>>k;
	memset(mp,-1,sizeof(mp));
	for(int i=1;i<=k;i++){
		int x1,x2,y1,y2,g;
		cin>>x1>>y1>>x2>>y2>>g;
		mp[id(x1,y1)][id(x2,y2)]=mp[id(x2,y2)][id(x1,y1)]=g;
	}
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		int x,y,q;
		cin>>x>>y>>q;
		v[id(x,y)].push_back(q);
	}
	queue<poi>q;
	q.push({1,1,0,0});
	map<P,int>vis;
	while(q.size()){
		auto[x,y,step,d]=q.front();
		q.pop();
		if(vis[{id(x,y),d}])continue;
		vis[{id(x,y),d}]=1;
		if(x==n&&y==m){
			cout<<step<<endl;
			return;
		}
		for(int x:v[id(x,y)])d|=(1<<x);
		for(int i=0;i<4;i++){
			int xx=dx[i]+x;
			int yy=dy[i]+y;
			if(!OK(xx,yy))continue;
			int dd=mp[id(xx,yy)][id(x,y)];
			if(dd!=-1&&!((1<<dd)&d))continue;
			q.push({xx,yy,step+1,d});
			// cout<<xx<<"%"<<yy<<endl;
		}
	}
	cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}