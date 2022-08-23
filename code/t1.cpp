#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt;
struct Edge
{
	int to,next;
}edge[N];
void add(int from,int to)
{
	edge[++cnt].to=to;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
int n,m;
int vis[N];
void solve()
{
	while(cin>>n>>m){
		vector<int>v;
		for(int i=1;i<=n;i++)vis[i]=0,head[i]=0;
		cnt=0;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			add(x,y);
			vis[y]++;
		}
		priority_queue<int,vector<int>,greater<int>>q;
		for(int i=1;i<=n;i++){
			if(!vis[i])q.push(i);
		}
		while(q.size()){
			int a=q.top();
			q.pop();
			v.push_back(a);
			for(int i=head[a];i;i=edge[i].next){
				int t=edge[i].to;
				vis[t]--;
				if(!vis[t])q.push(t);
			}
		}
		for(int i=0;i<(int)v.size()-1;i++)cout<<v[i]<<" ";
		cout<<v[(int)v.size()-1]<<endl;
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