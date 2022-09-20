#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
stack<int>st;
void solve()
{
	cin>>n;
	while(n){
		if(n&1)st.push(2);
		else st.push(0);
		n>>=1;
	}
	while(st.size()){
		cout<<st.top();
		st.pop();
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