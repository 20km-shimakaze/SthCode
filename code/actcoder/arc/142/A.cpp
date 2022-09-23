#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,k;
int f(int x)
{
	int an=0;
	while(x){
		an*=10;
		an+=x%10;
		x/=10;
	}
	return an;
}
void solve()
{
	cin>>n>>k;
	int ans=0;
	int t=1;
	int a=k;
	int b=f(k);
	while(1){
		int fl=0;
		if(a*t<=n)ans++,fl=1;
		if(b*t<=n)ans++,fl=1;
		if(!fl)break;
		t*=10;
	}
	if(a==b)ans/=2;
	if(b<a)ans=0;
	if(n<k)ans=0;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}