#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x,y;
string s;
void solve()
{
    cin>>n>>x>>y;
    int p=0;
    int xx;
    for(int i=1;i<=n;i++){
        cin>>xx;
        p^=xx;
    }
    if((x^p^y)&1){
        cout<<"Bob"<<endl;
    }
    else cout<<"Alice"<<endl;
}
signed main()
{
    int __;
    cin>>__;
    while(__--)solve();
}