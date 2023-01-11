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
int n,q;
void solve()
{
	cin>>n>>q;
	int ans=0;
	int t1=0,t0=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		ans+=x;
		if(x&1)t1++;
		else t0++;
	}
	while(q--){
		int op,x;
		cin>>op>>x;
		if(op){
			ans+=t1*x;
			if(x&1)t0+=t1,t1=0;
		}
		else{
			ans+=t0*x;
			if(x&1)t1+=t0,t0=0;
		}
		cout<<ans<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}