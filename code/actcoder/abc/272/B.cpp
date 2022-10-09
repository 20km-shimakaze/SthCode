#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int vis[103][103];
int n,m;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int num;
		cin>>num;
		vector<int>v(num+1);
		for(int j=1;j<=num;j++){
			cin>>v[j];
		}
		for(int j=1;j<=num;j++){
			for(int k=1;k<=num;k++){
				vis[v[j]][v[k]]=1;
			}
		}
	}
	int fl=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(!vis[i][j])fl=1;
		}
	}
	if(!fl)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}