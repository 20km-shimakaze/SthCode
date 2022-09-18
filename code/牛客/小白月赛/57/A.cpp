#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
    int an1=0,an2=0;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    an1=min(a,c)*min(b,d);
    cout<<an1<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}