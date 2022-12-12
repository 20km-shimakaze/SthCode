#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
void solve()
{
	cin>>n;
	if(n&1){
		for(int i=1;i<=n;i++)cout<<1<<" ";
		cout<<endl;
	}
	else{
		cout<<3<<" ";
		for(int i=1;i<=n-2;i++)cout<<"2"<<" ";
		cout<<1<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}