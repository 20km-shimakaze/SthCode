#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,k;
map<P,int>mp;
int a[N];
void solve()
{
	cin>>n>>m>>k;
	a[1]=n,a[2]=m;
	int l,r,len;
	for(int i=3;;i++){
		if(mp.count({a[i-2],a[i-1]})){
			l=mp[{a[i-2],a[i-1]}];
			r=i-1;
			len=r-l+1;
			break;
		}
		mp[{a[i-2],a[i-1]}]=i;
		a[i]=(a[i-2]*a[i-1])%10;
	}
	// cout<<l<<" "<<r<<endl;
	if(k<=l)cout<<a[k]<<endl;
	else{
		int di=k-l;
		int t=di%len;
		cout<<a[t+l]<<endl;
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