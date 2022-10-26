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
    string s;
    int n;
    cin>>n>>s;
    int a=0,q=0;
    for(char c:s){
        if(c=='A'){
            if(q)q--;
        }
        else q++;
    }
    // cout<<a<<" "<<q<<endl;
    if(q)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}