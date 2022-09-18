#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int qpow(ll a,ll n)
{
    if(a%mod==0)return 0;
    ll ans=1;
    while(n){
        if(n&1){
            ans=ans*a%mod;
        }
        n>>=1;
        a=a*a%mod;
    }
    ans%=mod;
    return ans;
}
void solve()
{
    int n;cin>>n;
    if(n>25)cout<<"Yes"<<endl;
    else puts(qpow(2,n)>n*n?"Yes":"No");
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}