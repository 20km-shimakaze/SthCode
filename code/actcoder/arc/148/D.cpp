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
vector<P>v;
map<int,int>mp,mmp;
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=2*n;i++){
        int x;
        cin>>x;
        x%=m;
        mp[x]++;
    }
    for(auto[x,val]:mp){
        if(val%2){
            mmp[x]+=val%2;
        }
    }
    int fl=0;
    int sum=0;
    if(m%2==0){
        for(auto[x,val]:mmp){
            if(mmp[(x+m/2)%m]!=val)fl=1;
            sum++;
        }
        if(sum%4)fl=1;
    }
    else if(mmp.size())fl=1;
    if(fl)cout<<"Alice"<<endl;
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