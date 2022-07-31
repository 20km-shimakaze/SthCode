#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int maxn=1e4+7;
void solve()
{
	int x,y;
    cin>>x>>y;
    int ans=(y-x);
    if(y>x){
        if(ans%10!=0){
        ans+=10;
    }
    cout<<ans/10<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
signed  main()
{
	int __;
    //cin>>__;
    __=1;
    while(__--)
	solve();
}