#include<bits/stdc++.h>
using namespace std;
int a[300005],n;
set<int>se;
void solve()
{
    cin>>n;
    se.clear();
    for(int i=1;i<=n;i++)cin>>a[i],se.insert(a[i]);
    int cnt=se.size();
    for(int i=1;i<=n;i++){
        if(i<=cnt)cout<<cnt<<" ";
        else cout<<++cnt<<" ";
    }
    puts("");
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}