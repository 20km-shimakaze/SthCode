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
int p[N];
void solve()
{
	cin>>n;	
	for(int i=1;i<=n;i++)cin>>p[i];
	sort(p+2,p+1+n);
	for(int i=2;i<=n;i++){
		if(p[1]>=p[i])continue;
		int t=(p[i]+p[1]+1)/2;
		p[1]=t;
	}
	cout<<p[1]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}