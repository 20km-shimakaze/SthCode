#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
map<int,int>mp;
void solve()
{
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int fl=0;
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        if(mp[x])mp[x]--;
        else{
            fl=1;
            //cout<<x<<endl;
        }
    }
    cout<<(fl==0?"Yes":"No")<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}