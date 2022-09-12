#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
vector<int>v;
unordered_map<int,int>mp;
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=2*n;i++){
        int x;
        cin>>x;
        x%=m;
        mp[x]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if((it->second)&1)v.push_back(it->first);
    }
    if(v.size())cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}