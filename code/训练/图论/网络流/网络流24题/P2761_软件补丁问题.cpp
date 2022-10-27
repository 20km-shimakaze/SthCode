#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e7+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m;
struct node
{
	int id,dis;
	friend bool operator<(node a,node b){
		return a.dis>b.dis;
	}
};
int dis[N];
struct poi
{
	int b1,b2,f1,f2,t;
}p[N];
int vis[N];
void debug(int x)
{
	bitset<3>bi(x);
	cout<<bi<<" ";
}
void solve()
{
	cin>>n>>m;
	int end=(1<<n)-1;
	for(int i=0;i<=end;i++)dis[i]=INF;
	for(int id=1;id<=m;id++){
		string a,b;
		cin>>p[id].t>>a>>b;
		for(int i=0;i<n;i++)p[id].b1|=((a[i]=='+')<<i);
		for(int i=0;i<n;i++)p[id].b2|=((a[i]=='-')<<i);
		for(int i=0;i<n;i++)p[id].f1|=((b[i]=='-')<<i);
		for(int i=0;i<n;i++)p[id].f2|=((b[i]=='+')<<i);
	}
	// cout<<"----------------"<<endl;
	// for(int i=1;i<=m;i++){
	// 	auto[b1,b2,f1,f2,t]=p[i];
	// 	debug(b1);
	// 	debug(b2);
	// 	debug(f1);
	// 	debug(f2);
	// 	cout<<endl;
	// }
	// cout<<"----------------"<<endl;
	priority_queue<node>q;
	int st=(1<<n)-1;
	q.push({st,0});
	dis[st]=0;
	while(q.size()){
		auto[id,diss]=q.top();
		q.pop();
		if(vis[id])continue;
		vis[id]=1;
		for(int i=1;i<=m;i++){
			auto[b1,b2,f1,f2,t]=p[i];
			if((id&b1)==b1&&(id&b2)==0){
				int nex=((id|f1)|f2)^f1;
				// debug(id);debug(nex);cout<<diss<<" &"<<i<<endl;
				if(dis[nex]>dis[id]+t){
					dis[nex]=dis[id]+t;
					q.push({nex,dis[nex]});
				}
			}
		}
	}
	if(dis[0]==INF)cout<<0<<endl;
	else cout<<dis[0]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}