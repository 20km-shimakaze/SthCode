#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
using pii=pair<int,int>;
const int inf=0x3f3f3f3f;
const int INF=1e9+7;
const int maxn=1e6;
int p[maxn],num[maxn];
long double t[maxn];
int n,m;
int find(int r){
	return p[r]=p[r]==r?p[r]:find(p[r]);
}
void init()
{
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
		num[i]=1;
	}
}
void solve()
{
	scanf("%d%d",&n,&m);
	init();
	for(int i=1;i<=n;i++)
		scanf("%Lf",&t[i]);
	for(int i=1;i<=m;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		int fa=find(x);
		int fb=find(y);
		if(fa!=fb)
		{
			p[fb]=fa;
			num[fa]+=num[fb];
			t[fa]+=t[fb];
		}
	}
	for(int i=1;i<=n;i++)
	{
		int x=find(i);
		printf("%.6lf\n",1.0*t[x]/num[x]);
	}
}
signed main()
{
	int __;cin>>__;
	while(__--)
		solve();
	return 0;
}