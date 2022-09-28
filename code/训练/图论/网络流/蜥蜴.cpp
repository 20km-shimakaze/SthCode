#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct Edge{
	int to,next,w;
}e[N];
int head[N],cnt=1;
int dep[N];
int n,m,s,t;
int r,c,d,tot;
int a[N],b[N];
int p[23][23],q[23][23];
void init(){
	cnt=1;
	memset(head+1,0,sizeof(int)*n);
}
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
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
int sum=0;
void solve()
{
	s=1,t=2;
	tot=2;
	cin>>r>>c>>d;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			scanf("%1d",&p[i][j]);
			int di=(i-1)*c+j;
			if(p[i][j]){
				a[di]=++tot;
				b[di]=++tot;
				add(a[di],b[di],p[i][j]);
				add(b[di],a[di],0);
			}
		}
	}
	char cc;
	for(int i=1;i<=r;i++){
		getchar();
		for(int j=1;j<=c;j++){
			scanf("%c",&cc);
			int di=(i-1)*c+j;
			if(cc=='L'){
				sum++;
				add(s,a[di],1);
				add(a[di],s,0);
			}
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(!p[i][j])continue;
			int minn=min({i-1,r-i,j-1,c-j});
			if(minn<d){
				int di=(i-1)*c+j;
				// cout<<i<<"&&&"<<j<<endl;
				add(b[di],t,INF);
				add(t,b[di],0);
			}
			for(int I=1;I<=r;I++){
				for(int J=1;J<=c;J++){
					if(I==i&&J==j)continue;
					if(!p[I][J])continue;
					if((i-I)*(i-I)+(j-J)*(j-J)<=d*d){
						int di1=(i-1)*c+j;
						int di2=(I-1)*c+J;
						// cout<<i<<" "<<j<<"---"<<I<<" "<<J<<endl;
						add(b[di1],a[di2],INF);
						add(a[di2],b[di1],0);
						// add(b[di2],a[di1],INF);
						// add(a[di1],b[di2],0);
					}
				}
			}
		}
	}
	int ans=DINIC(s,t);
	cout<<sum-ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}