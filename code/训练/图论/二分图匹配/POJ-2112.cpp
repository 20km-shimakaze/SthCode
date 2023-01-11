#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<bitset>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cmath>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=300+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct Edge{
	int to,next,w;
}e[N];
int head[N],cnt=1,tot;
int dep[N];
int n,m,s,t;
void init(){
	cnt=1;
	memset(head+1,0,sizeof(int)*tot);
}
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
void add_ed(int x,int y,int w,int rw=0)
{
	add(x,y,w);
	add(y,x,rw);
}
bool bfs(int s,int t)
{
	memset(dep+1,0,sizeof(int)*tot);
	queue<int>q;
	dep[s]=1;
	q.push(s);
	while(!q.empty())
	{
		int x=q.front();q.pop();
		if(x==t)return true;
		for(int i=head[x];i;i=e[i].next)
		{
			int y=e[i].to;
			int w=e[i].w;
			if(dep[y]==0&&w>0)
				q.push(y),dep[y]=dep[x]+1;
		}
	}
	return false;
}
int dfs(int x,int flow,int t)
{
	if(x==t)return flow;
	int out=flow;
	for(int i=head[x];i;i=e[i].next)
	{
		int y=e[i].to;
		int w=e[i].w;
		if(w!=0&&dep[y]==dep[x]+1)
		{
			int tmp=dfs(y,min(out,w),t);
			e[i].w-=tmp;
			e[i^1].w+=tmp;
			out-=tmp;
			if(!out)break;
		}
	}
	if(out==flow)dep[x]=0;
	return flow-out;
}
int DINIC(int s,int t)
{
	int ans=0;
	while(bfs(s,t))
		ans+=dfs(s,INF,t);
	return ans;
}
int ss[N][N],f[N][N],a[N];
int K,c;
int check(int mid)
{
	// for(int i=0;i<=K+c;i++)head[i]=0;
	init();
	cnt=1,tot=0;
	s=++tot;
	t=++tot;
	for(int i=1;i<=K+c;i++)a[i]=++tot;
	for(int i=1;i<=K;i++)add_ed(s,a[i],m);
	for(int i=K+1;i<=K+c;i++)add_ed(a[i],t,1);
	for(int i=1;i<=K;i++){
		for(int j=K+1;j<=K+c;j++){
			if(f[i][j]<=mid)add_ed(a[i],a[j],1);
		}
	}
	// cout<<"test"<<endl;
	int ans=DINIC(s,t);
	// cout<<"ans="<<ans<<endl;
	if(ans==c)return 1;
	else return 0;
}
void solve()
{
	cin>>K>>c>>m;
	for(int i=1;i<=K+c;i++){
		for(int j=1;j<=K+c;j++){
			cin>>ss[i][j];
			if(!ss[i][j])ss[i][j]=INF;
			f[i][j]=ss[i][j];
		}
	}
	for(int k=1;k<=K+c;k++){
		for(int i=1;i<=K+c;i++){
			for(int j=1;j<=K+c;j++){
				if(f[i][k]+f[k][j]<f[i][j]){
					f[i][j]=f[i][k]+f[k][j];
				}
			}
		}
	}
	int ans=0,l=1,r=1e6;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid))ans=mid,r=mid-1;
		else l=mid+1;
		// cout<<l<<" && "<<r<<endl;
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