#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn=1e6+5;
void solve() {
	ll N, A, B;
	cin >> N >> A >> B;
	ll P, Q, R, S;
	cin >> P >> Q >> R >> S;
	for (ll i = P; i <= Q; ++i) {
		for (ll j = R; j <= S; ++j)
			if (abs(A - i) == abs(j - B)) {
				cout << "#";
			} else {
				cout << ".";
			}
		cout << "\n";
	}
}
int main(){
	ios::sync_with_stdio(0);
	int t;
	t=1 ;
	while(t--){
		 solve();
	}
	return 0;
}

