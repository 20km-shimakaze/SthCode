#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,a[N];
int s[400];
void solve()
{
    cin>>n;
    s[0]=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        sum+=x;
        sum%=360;
        s[sum]=1;
    }
    int ans=0;
    int di=0;
    for(int i=1;i<360;i++){
        if(s[i]){
            ans=max(ans,i-di);
            di=i;
        }
    }
    ans=max(ans,360-di);
    cout<<ans<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}