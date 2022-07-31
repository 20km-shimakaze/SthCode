#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[30];
int b[30];
int n;
void solve()
{
    cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++){
		if(a[i]>b[i])swap(a[i],b[i]);
	}
	int ans=0;
	for(int i=1;i<n;i++){
		ans+=abs(a[i]-a[i+1]);
		ans+=abs(b[i]-b[i+1]);
	}
	cout<<ans<<endl;
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}