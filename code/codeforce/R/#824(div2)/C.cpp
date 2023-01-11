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
map<int, int> mp, mpp;
int check(int s) {
    int last = -1;
    while(mpp[s] != -1) {
        s = mpp[s];
    }
    return s;
}

void solve()
{
	int n;
    cin >> n;
    string s;
    cin >> s;
    s=" "+s;
    mpp.clear(), mp.clear();
    string res = "";
    for(int i = 0 ; i < 26; i ++ ) mpp[i] = mp[i] = -1;
    for(int i = 1; i <= n ; i ++ ) {
        if(~mpp[s[i] - 'a']) res += (char)(mpp[s[i] - 'a'] + 'a');
        else {
            int t = -1;
            for(int j = 0 ; j < 26 ; j ++ ) {
                if(j == s[i] - 'a') continue;
                if(mp[j] == -1 && check(j) != s[i] - 'a') {
                    t = j;
                    break;
                }
            }
            if(t == -1) {
                for(int j = 0 ; j < 26 ; j ++ )
                    if(mp[j] == -1 && j != s[i] - 'a') t = j;
            }
            mp[t] = s[i] - 'a';
            mpp[s[i] - 'a'] = t;
            res += (char)(mpp[s[i] - 'a'] + 'a');
        }
    }
    cout << res << endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}