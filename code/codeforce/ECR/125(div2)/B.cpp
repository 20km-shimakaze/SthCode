#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,b,x,y;
    cin>>n>>b>>x>>y;
    int ans=0,t=0;
    for(int i=1;i<=n;i++){
        if(t+x<=b)t+=x;
        else t-=y;
        ans+=t;
    }
    cout<<ans<<endl;
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}