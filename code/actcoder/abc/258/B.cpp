#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,a[14][14];
struct poi
{
	int x,y,num,dis;
};
int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++ ) {
		for (int j = 0; j < n; j ++ ) {
			scanf("%1lld",&a[i][j]);
		}
	}
	ll now = 0;
	for (int i = 0; i < n; i ++ ) {
		for (int j = 0; j < n; j ++ ) {
			for (int q = 0; q < 8; q ++ ) {
				ll temp = a[i][j];
				int x = i, y = j;
				for (int k = 1; k < n; k ++) {
					x = (x + dx[q] + n) % n;
					y = (y + dy[q] + n) % n;
					temp = temp * 10 + a[x][y];
				}
				now = max(now, temp);
			}
		}
	}
	cout << now;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}