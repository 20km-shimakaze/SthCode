#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int xo[N],su[N],a[N];
int get(int l,int r)
{
	return su[r]-su[l-1]-(xo[r]^xo[l-1]);
}
void solve()
{
	int sum=0,x=0;
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		su[i]=su[i-1]+a[i];
		xo[i]=xo[i-1]^a[i];
	}
	int anl,anr,L,R;
	cin>>L>>R;
	int tt=get(L,R);
	anl=L,anr=R;
	for(int l=L,r=L;l<=R;l++){
		while(r<l)r++;
		while(r<=R&&get(l,r)!=tt)r++;
		if(r>R)break;
		if(r-l<anr-anl){
			anr=r;
			anl=l;
		}
	}
	cout<<anl<<" "<<anr<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}