#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,p[N],num[N],maxx;
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i],num[p[i]]++,maxx=max(maxx,p[i]);
    for(int i=maxx;i>=1;i--){
        int sum=0;
        for(int j=1;j*i<=maxx;j++){
            sum+=num[j*i];
            if(sum>=2){
                cout<<i<<endl;
                return;
            }
        }
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