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
    int x,y,z,a,b;
    cin>>x>>y>>z>>a>>b;
    if(a>b)swap(a,b),swap(x,y);
    int fl=0;
    int t=0;
    t+=x;
    if(t>a)fl=1;
    t+=z;
    if(t>b)fl=1;
    cout<<(fl?"NO":"YES")<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}