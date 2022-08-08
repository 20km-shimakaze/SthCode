#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=200005;
const int mod=1e9+7;
int su[N],a[N];
void solve()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],su[i]=su[i-1]+a[i],su[i]%=mod;
    int an=0;
    for(int i=1;i<=n;i++){
        an+=a[i]*((su[n]-su[i]+mod)%mod);
        an%=mod;
    }
    cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}