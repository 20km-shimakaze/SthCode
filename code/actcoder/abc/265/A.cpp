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
    int x,y,n;
    cin>>x>>y>>n;
    if(x*3<=y){
        cout<<x*n<<endl;
    }
    else{
        cout<<n/3*y+(n%3)*x<<endl;
    }
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}