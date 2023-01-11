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
int n,m;
vector<vector<int>>s;
int check(int p)
{
	int a[n+1][m+1],t[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			t[i][j]=(s[i][j]>=p);
			a[i][j]=t[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
		}
	}
	for(int i=p;i<=n;i++){
		for(int j=p;j<=m;j++){
			int x=i-p;
			int y=j-p;
			if(a[i][j]-a[x][j]-a[i][y]+a[x][y]==p*p)return 1;
		}
	}
	return 0;
}
void solve()
{
	cin>>n>>m;
	s.resize(n+1);
	for(int i=1;i<=n;i++){
		s[i].resize(m+1);
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
		}
	}
	int ans=0,l=1,r=1e6+7;
	while(l<=r){
		int mid=(l+r)>>1;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	// cout<<check(1)<<endl;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}