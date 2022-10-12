#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,p,q,r;
int a[N];
set<int>se;
void solve()
{
	se.insert(0);
	cin>>n>>p>>q>>r;
	int cur=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cur+=a[i];
		se.insert(cur);
	}
	for(int x:se){
		if(se.find(x+p)!=se.end()&&se.find(x+p+q)!=se.end()&&se.find(x+p+q+r)!=se.end()){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}