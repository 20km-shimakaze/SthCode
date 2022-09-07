#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
unordered_map<int,int>mp;
set<int>se;
int n;
void solve()
{
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        se.insert(x);
        mp[x]++;
    }
    while(se.size()>1){
        int mi=*se.begin();
        int ma=*se.rbegin();
        int t=ma%mi;
        mp[t]++;
        mp[ma]--;
        if(!mp[ma])se.erase(ma);
        //cout<<mp[ma]<<endl;
        if(t)se.insert(t);
        ans++;
        // for(auto i:se)cout<<i<<" ";cout<<endl;
        //cout<<ma<<" "<<mi<<endl;
    }
    // int t=*se.begin();
    // cout<<ans+mp[t]-1<<endl;
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