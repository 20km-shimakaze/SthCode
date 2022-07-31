/*
直接让相邻蛋糕相遇
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
int a[maxn];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	cout<<a[n]+a[n-1]<<endl;
}
signed main(){
	int __;cin>>__;
	while(__--)solve();
}