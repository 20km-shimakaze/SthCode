#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1000;
int a[maxn];
int b[maxn];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	int fl=1;
	for(int i=1;i<=n;i++)
		if(b[i]-a[i]==1||b[i]==a[i])continue;
		else fl=0;
	if(fl)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
signed main()
{
	int __;cin>>__;
	while(__--)solve();
}