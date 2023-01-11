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
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m,k;
struct poi
{
	int from,to,c;
};
vector<poi>v[N];
int dis[N];
int spfa()
{
	memset(dis,0x3f,sizeof(int)*(n+1));
	for(int cnt=1;cnt<n;cnt++){
		for(int i=1;i<=n;i++){
			for(int j=0;j<v[i].size();j++){
				int x=v[i][j].from;
				int y=v[i][j].to;
				int c=v[i][j].c;
				if(dis[x]+c<dis[y]){
					dis[y]=dis[x]+c;
				}
			}
		}
	}
	for(int cnt=1;cnt<n;cnt++){
		for(int i=1;i<=n;i++){
			for(int j=0;j<v[i].size();j++){
				int x=v[i][j].from;
				int y=v[i][j].to;
				int c=v[i][j].c;
				if(dis[x]+c<dis[y]){
					// cout<<"**"<<x<<" "<<y<<" "<<c<<endl;
					return 1;
				}
			}
		}
	}
	return 0;
}
void solve()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)v[i].clear();
	for(int i=1;i<=m;i++){
		int x,y,c;
		cin>>x>>y>>c;
		poi tt;
		tt.from=x;
		tt.to=y;
		tt.c=c;
		v[x].push_back(tt);
		tt.from=y;
		tt.to=x;
		v[y].push_back(tt);
	}
	for(int i=1;i<=k;i++){
		int x,y,c;
		cin>>x>>y>>c;
		poi tt;
		tt.from=x;
		tt.to=y;
		tt.c=-c;
		v[x].push_back(tt);
	}
	if(spfa())cout<<"YES"<<endl;
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