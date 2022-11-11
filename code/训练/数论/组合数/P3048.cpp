#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int qpow(ll a,ll n)
{
	if(a%mod==0)return 0;
	ll ans=1;
	while(n){
		if(n&1){
			ans=ans*a%mod;
		}
		n>>=1;
		a=a*a%mod;
	}
	ans%=mod;
	return ans;
}
int C(int n,int m)
{
    if(n<m) return 0;
    int res=1;
    for(int i=1;i<=m;i++)
    {
        res*=((n-m+i)%mod)*qpow(i,mod-2)%mod;
        res%=mod;
    }
    return res;
}
int ans[N];
void solve()
{
	int n,k;
	cin>>n>>k;
	int cnt=0;
	while(1){
		int num=C(k+cnt-1,k-1);
		if(n>num){
			n-=num;
			cnt++;
		}
		else break;
	}
	ans[1]=cnt;cnt=1;
	while(--n){
		if(cnt>=k){
			for(int i=k-1;i>=1;i--){
				if(ans[i]>0){
					cnt=i+1;
					ans[i]--;
					ans[i+1]=1+ans[k];
					if (i!=k-1) ans[k]=0;
                    break;
				}
			}
		}
		else ans[cnt]--,ans[++cnt]++;
	}
	for(int i=1;i<=k;i++){
		putchar('1');
		while(ans[i]>0)putchar('0'),ans[i]--;
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