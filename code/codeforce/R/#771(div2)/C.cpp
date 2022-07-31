#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
int p[maxn];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>p[i];
	int ans=0,ma=0;
	for(int i=1;i<=n;i++){
		ma=max(ma,p[i]);
		if(ma==i)ans++;
	}
	cout<<ans<<endl;
}
signed main(){
	int __;cin>>__;
	while(__--)solve();
}