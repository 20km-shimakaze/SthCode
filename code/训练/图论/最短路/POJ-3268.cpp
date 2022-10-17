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
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct poi
{
	int id,dis;
	poi(int id=0,int dis=0){
		this->dis=dis;
		this->id=id;
	}
	friend bool operator<(poi a,poi b){
		return a.dis>b.dis;
	}
};
poi a,b;
int dis1[N],dis2[N];
int n,m,x;
struct node
{
	int x,y,w;
	// node(int x,int y,int w){
	// 	this->x=x;
	// 	this->w=w;
	// 	this->y=y;
	// }
};
node s[N];
struct Edge
{
	int to,next,w;
}e1[N],e2[N];
int head1[N],cnt1,head2[N],cnt2;
void add1(int from,int to,int w)
{
	e1[++cnt1].w=w;
	e1[cnt1].to=to;
	e1[cnt1].next=head1[from];
	head1[from]=cnt1;
}
void add2(int from,int to,int w)
{
	e2[++cnt2].w=w;
	e2[cnt2].to=to;
	e2[cnt2].next=head2[from];
	head2[from]=cnt2;
}
void dij1(int s)
{
	priority_queue<poi>q;
	memset(dis1,0x3f,sizeof(int)*(n+1));
	bitset<1003>vis;
	dis1[s]=0;
	q.push(poi(s,0));
	while(q.size()){
		a=q.top();
		q.pop();
		int x=a.id;
		if(vis[x])continue;
		vis[x]=1;
		for(int i=head1[x];i;i=e1[i].next){
			int y=e1[i].to;
			int w=e1[i].w;
			if(dis1[y]>dis1[x]+w){
				dis1[y]=dis1[x]+w;
				q.push(poi(y,dis1[y]));
			}
		}
	}
}
void dij2(int s)
{
	priority_queue<poi>q;
	memset(dis2,0x3f,sizeof(int)*(n+1));
	bitset<1003>vis;
	dis2[s]=0;
	q.push(poi(s,0));
	while(q.size()){
		a=q.top();
		q.pop();
		int x=a.id;
		if(vis[x])continue;
		vis[x]=1;
		for(int i=head2[x];i;i=e2[i].next){
			int y=e2[i].to;
			int w=e2[i].w;
			if(dis2[y]>dis2[x]+w){
				dis2[y]=dis2[x]+w;
				q.push(poi(y,dis2[y]));
			}
		}
	}
}
void solve()
{
	cin>>n>>m>>x;
	for(int i=1;i<=m;i++){
		cin>>s[i].x>>s[i].y>>s[i].w;
		add1(s[i].x,s[i].y,s[i].w);
		add2(s[i].y,s[i].x,s[i].w);
	}
	dij1(x);
	dij2(x);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(i==x)continue;
		ans=max(ans,dis1[i]+dis2[i]);
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