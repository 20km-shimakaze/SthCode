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
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int &i:a)cin>>i;

  cout << (count(a.begin(), a.end(), 1) ? "Yes" : "No") << "\n";
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}