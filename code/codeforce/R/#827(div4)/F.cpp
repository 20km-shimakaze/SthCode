#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve () {
    int m;
    cin >> m;
    bool fb = false, fa = false;
    int cnts = 0, cntt = 0;
    while (m --) {
        int op, k;
        string s;
        cin >> op >> k >> s;
        if (op == 1) {
            cnts += s.size () * k;
            if (!fa && !fb) {
                for (int i = 0; i < s.size (); i++) {
                    if (s[i] > 'a') {
                        fa = true;
                        break;
                    }
                }
            }
        }
        else {
            cntt += s.size () * k;
            if (!fb) {
                for (int i = 0; i < s.size (); i++) {
                    if (s[i] > 'a') {
                        fb = true;
                        break;
                    }
                }
            } 
        }
        if (fb)   puts ("YES");
        else {
            if (fa || cnts >= cntt) puts ("NO");
            else    puts ("YES");
        }
    }
}

signed main () {
    int t;
    cin >> t;
    while (t --)    solve ();
}