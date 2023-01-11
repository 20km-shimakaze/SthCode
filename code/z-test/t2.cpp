#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void exgcd(int a,int b,int &x,int &y)
{
    if(b==0){
        x=1;
        y=0;
        return;
    }
    exgcd(b,a%b,y,x);
    y-=(a/b)*x;
}
void solve()
{
    // ax+by=c
    int a,b,x,y;
    cin>>a>>b;
    exgcd(a,b,x,y);
    cout<<x<<" "<<y<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}