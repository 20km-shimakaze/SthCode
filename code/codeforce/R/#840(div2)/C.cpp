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
int n,p[N];
void solve()
{
    cin>>n;
    int ma=0;
    int ans=0;
    for(int i=1;i<=n;i++)cin>>p[i];
    if(n==2){
        ans=max(p[1]+p[2],2*abs(p[1]-p[2]));
    }
    else if(n==3){
        if(p[1]>p[3])swap(p[1],p[3]);
        ans=max({3*p[3],3*abs(p[2]-p[1]),p[1]+p[2]+p[3]});
    }
    else{
        ma=*max_element(p+1,p+1+n);
        ans=n*ma;
    }
    cout<<ans<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}