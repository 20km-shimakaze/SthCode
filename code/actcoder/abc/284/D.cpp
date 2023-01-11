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
void solve()
{
	int n;
	cin>>n;
	int t=3e6;
	int maxx=min(t,n);
	for(int i=2;i<=maxx;i++){
		if(n%(i*i)==0){
			cout<<i<<" "<<n/i/i<<endl;
			return;
		}
	}
	for(int i=2;i<=maxx;i++){
		if(n%i)continue;
		int t=n/i;
		int sq=sqrt(t);
		if(sq*sq==t){
			cout<<sq<<" "<<i<<endl;
			return;
		}
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