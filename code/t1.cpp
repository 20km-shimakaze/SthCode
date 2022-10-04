#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int cnt1,cnt2;
void solve()
{
    int n;
    cin>>n;
    cnt1=cnt2=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x&1)cnt1++;
        else cnt2++;
    }
    cnt2%=2;
    cnt1%=4;
    if(cnt1==0||cnt1==3)puts("Alice");
    else if(cnt1==1)puts(cnt2?"Alice":"Bob");
    else if(cnt1==2)puts("Bob");
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}