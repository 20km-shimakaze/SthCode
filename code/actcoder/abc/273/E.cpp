#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int pre[N],at,idx,e[N];
char op[N];
map<int,int>mp;
void solve()
{
	int q,k;
	scanf("%lld",&q);
	e[0]=-1;
	while(q--){
		scanf("%s",op);
		if(*op=='A'){
			scanf("%lld",&k);
			e[++idx]=k;
			pre[idx]=at;
			at=idx;
		}
		else if(*op=='D'){
			at=pre[at];
		}
		else if(*op=='S'){
			scanf("%lld",&k);
			mp[k]=at;
		}
		else{
			scanf("%lld",&k);
			at=mp[k];
		}
		printf("%lld ",e[at]);
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