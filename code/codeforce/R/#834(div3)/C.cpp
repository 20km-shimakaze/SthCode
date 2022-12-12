#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int l,r,x,a,b;
	cin>>l>>r>>x>>a>>b;
	if(a==b){
		cout<<0<<endl;
		return;
	}
	if(abs(a-b)>=x){
		cout<<1<<endl;
		return;
	}
	if(a<b&&(l<=a-x||r>=b+x)){
		cout<<2<<endl;
		return;
	}
	if(a>b&&(r>=a+x||l<=b-x)){
		cout<<2<<endl;
		return;
	}
	if((b>r-x&&b<l+x)||(r-a<x&&a-l<x))cout<<-1<<endl;
	else cout<<3<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}