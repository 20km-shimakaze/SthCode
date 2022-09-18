#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
void solve()
{
    cin>>n;
    int ans=0;
    int p=10,q=1;
    while(1){
        int m=min(n,p-1)-q+1;
        m%=mod;
        ans+=m*(m+1)/2%mod;
        ans%=mod;
        if(p>n)break;
        p*=10;
        q*=10;
    }
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