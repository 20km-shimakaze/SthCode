#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve() {
    int n; cin >> n;
    if (n%3 == 0) {
        for (int i = 1; i <= n/3; i++) {
            cout << "21";
        }
    }
    else if (n%3 == 1) {
        cout << 1;
        for (int i = 1; i <= n/3; i++) {
            cout << "21";
        }
    }
    else {
        cout << 2;
        for (int i = 1; i <= n/3; i++) {
            cout << "12";
        }
    }
    cout << endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}