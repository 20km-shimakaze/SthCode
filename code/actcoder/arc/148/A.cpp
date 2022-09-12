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
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int a=v[0];
    int b=v[1]-a;
    for(int i=1;i<v.size();i++){
        b=__gcd(b,v[i]-a);
    }
    if(b==1)cout<<2<<endl;
    else cout<<1<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}