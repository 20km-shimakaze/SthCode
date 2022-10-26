#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
    int n,x;
    cin>>n>>x;
    priority_queue<int,vector<int>,greater<int>>q;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t>=x)continue;
        mp[t]++;
    }
    for(auto[a,b]:mp){
        if(a>=x){
            mp[a]=0;
            continue;
        }
        mp[a+1]+=b/(a+1);
        mp[a]%=(a+1);
    }
    int fl=0;
    for(auto[a,b]:mp){
        if(b)fl=1;
    }
    cout<<(fl?"No":"Yes")<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}