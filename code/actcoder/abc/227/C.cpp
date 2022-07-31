#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i*i*i<=n;i++){
        for(ll j=i;j*j*i<=n;j++){
            ans+=n/i/j-j+1;
        }
    }
    cout<<ans<<endl;
}
//暴力，然后优化