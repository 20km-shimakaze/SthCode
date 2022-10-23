#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int p[N],t[N];
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		p[i*2]=x;
		p[i*2+1]=x;
		t[i*2]=t[x]+1;
		t[i*2+1]=t[x]+1;
	}
	for(int i=1;i<=2*n+1;i++){
		cout<<t[i]<<endl;
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