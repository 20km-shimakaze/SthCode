#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
const int MAXN = 100010;
int n;
ll a[MAXN], b[MAXN], ans, M, x, y;
ll exgcd(ll a, ll b, ll &x, ll &y){
    if(!b){ x = 1; y = 0; return a; }
    ll d = exgcd(b, a % b, x, y);
    ll z = x; x = y; y = z - (a / b) * y;
    return d;
}
ll Slow_Mul(ll n, ll k, ll mod){
    ll ans = 0;
    while(k){
      if(k & 1) ans = (ans + n) % mod;
      k >>= 1;
      n = (n + n) % mod;
    }
    return ans;
}
void solve(){
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
       scanf("%lld%lld", &b[i], &a[i]);
    ans = a[1];
    M = b[1];
    for(int i = 2; i <= n; ++i){
       ll B = ((a[i] - ans) % b[i] + b[i]) % b[i];
       ll GCD = exgcd(M, b[i], x, y);
       x = Slow_Mul(x, B / GCD, b[i]);
       ans += M * x;
       M *= b[i] / GCD;
       ans = (ans + M) % M;
    }
    printf("%lld\n", ans);
}
signed main()
{
	//IOS
	freopen("C:\\Users\\28013\\Desktop\\P4777_15.in","r",stdin);
 	freopen("C:\\Users\\28013\\Desktop\\out.out","w",stdout);
	int __=1;
	//cin >> __;
	while (__--)
		solve();
	fclose(stdin);
	fclose(stdout);
}