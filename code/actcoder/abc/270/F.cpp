#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=LLONG_MAX;
const int mod=998244353;
int fa[N];
int find(int x)
{
	return fa[x]==x?x:fa[x]=find(fa[x]);
}
int a[N],b[N];
struct poi
{
	int x,y,w;
}s[N];
int n,m;
vector<poi>v;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=m;i++)cin>>s[i].x>>s[i].y>>s[i].w;
	sort(s+1,s+1+m,[&](poi a,poi b){
		return a.w<b.w;
	});
	int ans=INF;
	int sum=0;
	//road
	int fl=0;
	for(int i=1;i<=n;i++)fa[i]=i;
	for(int i=1;i<=m;i++){
		int xx=find(s[i].x);
		int yy=find(s[i].y);
		if(xx!=yy)sum+=s[i].w,fa[xx]=yy;
	}
	for(int i=1;i<=n;i++)if(find(i)==i)fl++;
	if(fl==1)ans=min(ans,sum);

	// air+port+road
	sum=0,fl=0;
	for(int i=1;i<=n+2;i++)fa[i]=i;
	for(int i=1;i<=m;i++)v.push_back(s[i]);
	for(int i=1;i<=n;i++)v.push_back({i,n+1,a[i]}),v.push_back({i,n+2,b[i]});
	sort(v.begin(),v.end(),[&](poi a,poi b){
		return a.w<b.w;
	});
	for(int i=0;i<v.size();i++){
		int xx=find(v[i].x);
		int yy=find(v[i].y);
		if(xx!=yy)sum+=v[i].w,fa[xx]=yy;
	}
	for(int i=1;i<=n+2;i++)if(find(i)==i)fl++;
	if(fl==1)ans=min(ans,sum);

	// road+port
	v.clear();
	sum=0,fl=0;
	for(int i=1;i<=n+1;i++)fa[i]=i;
	for(int i=1;i<=m;i++)v.push_back(s[i]);
	for(int i=1;i<=n;i++)v.push_back({i,n+1,b[i]});
	sort(v.begin(),v.end(),[&](poi a,poi b){
		return a.w<b.w;
	});
	for(int i=0;i<v.size();i++){
		int xx=find(v[i].x);
		int yy=find(v[i].y);
		if(xx!=yy)sum+=v[i].w,fa[xx]=yy;
	}
	for(int i=1;i<=n+1;i++)if(find(i)==i)fl++;
	if(fl==1)ans=min(ans,sum);

	// road+air
	v.clear();
	sum=0,fl=0;
	for(int i=1;i<=n+1;i++)fa[i]=i;
	for(int i=1;i<=m;i++)v.push_back(s[i]);
	for(int i=1;i<=n;i++)v.push_back({i,n+1,a[i]});
	sort(v.begin(),v.end(),[&](poi a,poi b){
		return a.w<b.w;
	});
	for(int i=0;i<v.size();i++){
		int xx=find(v[i].x);
		int yy=find(v[i].y);
		if(xx!=yy)sum+=v[i].w,fa[xx]=yy;
	}
	for(int i=1;i<=n+1;i++)if(find(i)==i)fl++;
	if(fl==1)ans=min(ans,sum);

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