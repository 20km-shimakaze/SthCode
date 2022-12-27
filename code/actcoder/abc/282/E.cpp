#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
int mod=998244353;
int s[502][502];
int n,p[N];
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
int fa[503];
int find(int x)
{
	return fa[x]==x?x:fa[x]=find(fa[x]);
}
struct poi
{
	int x,y,num;
};
vector<poi>v;
void solve()
{
	cin>>n>>mod;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			v.push_back({i,j,(qpow(p[i],p[j])+qpow(p[j],p[i]))%mod});
		}
	}
	sort(v.begin(),v.end(),[&](poi a,poi b){
		return a.num>b.num;
	});
	for(int i=1;i<=n;i++)fa[i]=i;
	int ans=0;
	for(auto[x,y,num]:v){
		int xx=find(x);
		int yy=find(y);
		if(xx!=yy){
			ans+=num;
			fa[xx]=yy;
		}
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}