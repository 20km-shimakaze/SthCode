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
int n;
int a[103][103];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
vector<int>v;
void dfs(int x,int y,int di,int p)
{
	if(di==v.size())return;
	a[x][y]=v[di];
	for(int i=0;i<4;i++){
		int ti=(p+i)%4;
		int xx=x+dx[ti];
		int yy=y+dy[ti];
		if(xx<=n&&yy<=n&&xx>=1&&yy>=1&&a[xx][yy]==0){
			dfs(xx,yy,di+1,ti);
		}
	}
}
void solve()
{
	cin>>n;
	v.clear();
	int num=1;
	int t=n*n-1;
	memset(a,0,sizeof(a));
	for(int i=1;i<n*n;i++){
		v.push_back(num);
		if(i&1)num+=t;
		else num-=t;
		t--;
	}
	v.push_back(num);
	// for(int x:v)cout<<x<<" ";
	dfs(1,1,0,0);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
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