#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,k,a,b;
void solve()
{
    cin>>n>>k>>a>>b;
    int num=max(a-1,n-a);
    int sum=max(b-1,n-b);
    if(num>k&&sum>k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}