#include <bits/stdc++.h> 
using namespace std;

template <class T>
inline bool mnto(T& a, T b) {return a > b ? a = b, 1 : 0;}
template <class T>
inline bool mxto(T& a, T b) {return a < b ? a = b, 1: 0;}
#define REP(i, s, e) for (int i = s; i < e; i++)
#define RREP(i, s, e) for (int i = s; i >= e; i--)
typedef long long ll;
typedef long double ld;
#define MP make_pair
#define FI first
#define SE second
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
#define MT make_tuple
typedef tuple<int, int, int> iii;
#define ALL(_a) _a.begin(), _a.end()
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;

#ifndef DEBUG
#define cerr if (0) cerr
#endif

#define INF 1000000005
#define LINF 1000000000000000005ll
#define MAXN 200005

int t;
int n;
int a[MAXN], b[MAXN];
int cnt[MAXN];

int main() {
#ifndef DEBUG
    ios::sync_with_stdio(0), cin.tie(0);
#endif
    cin >> t;
    while (t--) {
        cin >> n;
        REP (i, 1, n + 1) {
            cnt[i] = 0;
        }
        REP (i, 0, n) {
            cin >> a[i];
        }
        REP (i, 0, n) {
            cin >> b[i];
        }
        int i = 0, j = 0;
        bool pos = 1;
        while (j < n) {
            if (i < n && j < n && a[i] == b[j]) {
                i++; j++;
                continue;
            }
            if (cnt[b[j]] > 0 && b[j] == b[j - 1]) {
                cnt[b[j++]]--;
            } else if (i < n) {
                cnt[a[i++]]++;
            } else {
                pos = 0;
                break;
            }
        }
        if (pos) {
            assert(i == n);
            REP (i, 1, n + 1) {
                assert(cnt[i] == 0);
            }
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}