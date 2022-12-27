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
inline int highbit(int x) { return 31 - __builtin_clz(x); }
void solve()
{
	int n;
    cin >> n;
    map<pair<int, int>, int> area;
    int m = 0;
    for(int i = 1; i <= n; ++ i){
        for(int j = 1; i + j - 1 <= n; j <<= 1){
            ++ m;
            area[{i, i + j - 1}] = m;
        }
    }
    cout << area.size() << '\n';
    for(auto &i : area){
        cout << i.first.first << ' ' << i.first.second << '\n';
    }
    cout.flush();
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        int t = highbit(r - l + 1);
        cout << area[{l, l + (1 << t) - 1}] << ' ' << area[{r - (1 << t) + 1, r}] << endl;
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