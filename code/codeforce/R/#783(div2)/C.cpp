/*
贪心，应该是有一个点是不要进行任何变化的，因为要是这个点变化了，这个点后面的要同步增加，没有必要
所以只要以一个点作为不修改，其他的修改即可时间复杂度o(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[10000];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=1e18;
	for(int i=1;i<=n;i++){
		int num=0,no=0;
		for(int j=i-1;j>=1;j--){
			int t=no/a[j]+1;
			num+=t;
			no=t*a[j];
		}
		int nw=0;
		for(int j=i+1;j<=n;j++){
			int t=nw/a[j]+1;
			num+=t;
			nw=t*a[j];
		}
		ans=min(ans,num);
	}
	cout<<ans<<endl;	
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}