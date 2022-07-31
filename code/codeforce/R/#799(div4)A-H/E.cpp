/*
求区间和为固定某值，只需要先求出前缀和数组，
然后根据二分找是否存在s[a]-s[b]=s，记录其中距离最大值
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,su[200005],x,s;
void solve()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>x;
		su[i]=su[i-1]+x;
	}
	if(su[n]<s){
		puts("-1");
		return;
	}
	int maxx=-1;
	for(int i=1;i<=n;i++){
		int dis=upper_bound(su+1,su+1+n,s+su[i-1])-su-1;
		if(su[dis]==s+su[i-1])maxx=max(maxx,dis-i+1);
	}
	cout<<n-maxx<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}