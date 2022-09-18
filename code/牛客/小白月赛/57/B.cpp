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
    string s;
    cin>>s;
    int fl=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')fl=1;
    }
    if(!fl)cout<<0<<endl;
    else if(s[0]=='0'&&s.back()=='0')cout<<2<<endl;
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