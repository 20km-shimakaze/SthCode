#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
set<int>se;
int n,k,a[N];
priority_queue<int,vector<int>,greater<int>>q;
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	for(int i=k+1;i<=n;i++){
		int x;
		cin>>x;
		cout<<q.top()<<endl;
		q.push(x);
		q.pop();
	}
	cout<<q.top()<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}