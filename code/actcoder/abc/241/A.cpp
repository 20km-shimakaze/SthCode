#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int a[10];
void solve()
{
    for(int i=0;i<10;i++)cin>>a[i];
    int t=0;
    for(int i=1;i<=3;i++){
        t=a[t];
    }
    cout<<t<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}