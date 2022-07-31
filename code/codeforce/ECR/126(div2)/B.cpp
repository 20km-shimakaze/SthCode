/*
暴力吧+1和*2的组合全部试一遍，反正范围小
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int mod=32768;
void solve()
{
    cin>>n;
    int ans=LLONG_MAX;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            int cnt=0,t=n+i;
            for(int k=0;k<20;k++){
                if(t%mod==0)break;
                t*=2;
                cnt++;
            }
            ans=min(ans,cnt+i);
        }
    }
    cout<<ans<<" ";
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}