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
vector<int>a(9);
void solve()
{
	cin>>n;
	int mi=INF;
	for(int &x:a)cin>>x,mi=min(mi,x);
	int num=n/mi;
	for(int i=8;i>=0;i--){
		while(num&&(num-1)*mi<=n-a[i]){
			cout<<i+1;
			n-=a[i];
			num--;
		}
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}