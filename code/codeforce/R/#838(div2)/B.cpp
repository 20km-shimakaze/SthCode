#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
int a[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<P>v;
	for(int i=1;i<=n;i++){
		if((a[i]&-a[i])==a[i])continue;
		int t=1;
		int num=0;
		while(t<a[i])t<<=1,num++;
		v.push_back({i,t-a[i]});
	}
	cout<<v.size()<<endl;
	for(auto[t1,t2]:v){
		cout<<t1<<" "<<t2<<endl;
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