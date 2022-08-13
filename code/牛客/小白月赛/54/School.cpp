#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
using ll=long long;
using pii=pair<int,int>;
const int INF=0x3f3f3f3f;
const int maxn=1e6;
struct node{
	ll x,y;
}a[maxn];
ll n,h,m,q;
void solve()
{
	cin>>n>>h>>m>>q;
	for(int i=1;i<=n;i++)
	{
		ll x,y;
		cin>>x>>y;
		a[i].x=x*m+y;
		cin>>x>>y;
		a[i].y=x*m+y;
	}
	sort(a+1,a+1+n,[&](node a,node b){
		if(a.x!=b.x)return a.x<b.x;
		return a.y<b.y;
	});
	vector<int>x,y;
	ll s=a[1].x;
	ll t=a[1].y;
	for(int i=2;i<=n;i++)
	{
		if(t<a[i].x)
		{
			x.push_back(s);
			y.push_back(t);
			s=a[i].x;
			t=a[i].y;
		}
		else t=max(t,a[i].y);
	}
	x.push_back(s);
	y.push_back(t);
    
	while(q--)
	{
		int a,b,t;
		cin>>a>>b;
		t=a*m+b;
		int fl=lower_bound(y.begin(),y.end(),t)-y.begin();
		if(x[fl]<=t&&y[fl]>=t)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}

}
signed main()
{	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
		solve();
	return 0;
}