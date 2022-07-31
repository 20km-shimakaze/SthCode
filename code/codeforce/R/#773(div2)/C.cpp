#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x;
map<int,int>mp;
void solve()
{
    cin>>n>>x;
    mp.clear();
    int t;
    for(int i=1;i<=n;i++){
        cin>>t;
        mp[t]++;
    }
    int ans=0;
    int a,b;
    for(auto it=mp.begin();it!=mp.end();it++){
        a=it->first;
        while(mp[a]>0){
            if(mp[a*x]>0){
                mp[a*x]--;
            }
            else ans++;
            mp[a]--;
        }
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