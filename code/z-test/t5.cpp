#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long
map<ll,ll> mp;
ll x;
ll f(ll x){
	if(x<=4) return x;
	if(mp.count(x)) return mp[x];
	return mp[x]=f(x/2)*f((x+1)/2)%mod;
}
int main(){
	cin>>x;
	cout<<f(x)<<endl;
}
