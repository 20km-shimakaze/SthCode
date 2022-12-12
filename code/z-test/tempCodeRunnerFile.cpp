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
	int n;
	cin>>n;
	int a=1,b=n-1,maxx=a*b;
	for(int i=1;i*i<=n;i++){
		if(i*(n-i)/__gcd(i,n-i)<maxx){
			a=i,b=n-i;
			maxx=i*(n-i)/__gcd(i,n-i);
		}
	}
	if(n%2==0)a=b=n/2;
	cout<<a<<" "<<b<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}