#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
map<P,char>mp;
int idx=0,idx1=0;
void solve()
{
    int n,m;
    cin>>n>>m;
    while(m--){
        char op;
        cin>>op;
        if(op=='+'){
            int u,v;
            char c;
            cin>>u>>v>>c;
            mp[{u,v}]=c;
            if(mp.count({v,u})&&mp[{u,v}]==mp[{v,u}])idx++;
            if(mp.count({v,u}))idx1++;
        }
        else if(op=='-'){
            int u,v;
            cin>>u>>v;
            if(mp.count({v,u})&&mp[{v,u}]==mp[{u,v}]){
                mp.erase({u,v});
                idx--;
            }
            else mp.erase({u,v});
            if(mp.count({v,u}))idx1--;
        }
        else{
            int k;
            cin>>k;
            if((k&1)&&idx1)cout<<"YES"<<endl;
            else cout<<(idx?"YES":"NO")<<endl;
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