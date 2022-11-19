#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct poi
{
	int l,r;
}a[N];
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].l>>a[i].r;
	}
	sort(a+1,a+1+n,[&](poi a,poi b){
		if(a.l==b.l)return a.r<b.r;
		return a.l<b.l;
	});
	int l=-1,r=-1;
	for(int i=1;i<=n;i++){
		auto[al,ar]=a[i];
		if(l==-1){
			l=al;
			r=ar;
			continue;
		}
		if(al<=r)r=max(r,ar);
		else{
			cout<<l<<" "<<r<<endl;
			l=-1;
		}
	}
	if(l!=-1)cout<<l<<" "<<r<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}