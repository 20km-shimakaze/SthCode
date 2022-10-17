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
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int dis[N],vis[N],n;
struct poi
{
	int id,w;
	friend bool operator<(poi a,poi b){
		return a.w>b.w;
	}
}t[N];
struct Edge
{
	int to,next,w;
}e[N];
int head[N],cnt;
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
void solve()
{
	while(cin>>n,n){
		int ans=0,minn=INF;
		for(int i=1;i<=n;i++)head[i]=0;
		cnt=0;
		for(int i=1;i<=n;i++){
			int num;cin>>num;
			for(int j=1;j<=num;j++){
				int y,w;
				cin>>y>>w;
				// cout<<"&"<<i<<" "<<y<<" "<<w<<endl;
				add(i,y,w);
			}
		}
		for(int i=1;i<=n;i++){
			for(int i=1;i<=n;i++)dis[i]=INF,vis[i]=0;
			priority_queue<poi>q;
			poi a;
			a.id=i;
			a.w=0;
			q.push(a);
			dis[i]=0;
			while(q.size()){
				a=q.top();
				q.pop();
				int id=a.id;
				int w=a.w;
				if(vis[id])continue;
				vis[id]=1;
				for(int x=head[id];x;x=e[x].next){
					int y=e[x].to;
					int w=e[x].w;
					if(dis[y]>dis[id]+w){
						dis[y]=dis[id]+w;
						poi b;
						b.id=y;
						b.w=dis[y];
						q.push(b);
					}
				}
			}
			int an=0;
			for(int i=1;i<=n;i++)an=max(an,dis[i]);
			if(an<minn){
				minn=an;
				ans=i;
			}
		}
		cout<<ans<<" "<<minn<<endl;
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