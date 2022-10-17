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
	int id;
	int dis;
	friend bool operator<(poi a,poi b){
		return a.dis>b.dis;
	}
}s[N];
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
int dis[N],vis[N];
struct pp
{
	int x,y;
}p[N];
int num=0;
void solve()
{
	int n;
	while(cin>>n,n){
		num++;
		priority_queue<poi>q;
		poi a,b;
		for(int i=1;i<=n;i++){
			cin>>p[i].x>>p[i].y;
			dis[i]=INF;
			head[i]=0;
			vis[i]=0;
		}
		cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				add(i,j,(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
			}
		}
		a.dis=0;
		a.id=1;
		dis[1]=0;
		q.push(a);
		while(q.size()){
			a=q.top();
			q.pop();
			int id=a.id;
			if(vis[id])continue;
			vis[id]=1;
			for(int x=head[id];x;x=e[x].next){
				int y=e[x].to;
				int w=e[x].w;
				if(dis[y]>max(dis[id],w)){
					dis[y]=max(dis[id],w);
					b.id=y;
					b.dis=max(dis[id],w);
					q.push(b);
				}
			}
		}
		// for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
		// cout<<endl;
		if(num!=1)cout<<endl;
		cout<<"Scenario #"<<num<<endl;
		cout<<"Frog Distance = ";
		printf("%.3lf\n",sqrt(dis[2]));
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