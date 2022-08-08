#include<bits/stdc++.h>
using namespace std;
#define int long long
double a,b,c,x;
void solve()
{
    cin>>a>>b>>c>>x;
    if(x<=a){
        printf("%f",1.0*1);
    }
    else if(x<=b){
        printf("%f",1.0*c/(b-a));
    }
    else printf("%f",1.0*0);
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)solve();
}