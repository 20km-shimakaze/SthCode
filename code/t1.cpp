#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
int a[N];
void solve()
{
	while(cin>>n){
		set<int>se;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(se.find(2*a[i]-a[j])!=se.end()){
					ans++;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}