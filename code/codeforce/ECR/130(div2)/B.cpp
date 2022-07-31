#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int su[200005],a[200005];
int n,q;
void solve()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,greater<int>());
    int x,y;
    for(int i=1;i<=n;i++){
        su[i]=su[i-1]+a[i];
    }
    while(q--){
        cin>>x>>y;
        cout<<su[x]-su[x-y]<<endl;
    }
}
signed main()
{
    int __=1;
    //cin>>__;
    while(__--)solve();
}