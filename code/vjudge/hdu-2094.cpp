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
int n;
map<string,int>mp,vis;
void add(int from,int to)
{
    edge[++cnt].to=to;
    edge[cnt].next=head[from];
    head[from]=cnt;
}
void solve()
{
	while(cin>>n,n){
        mp.clear();
        vis.clear();
        int num=0;
        for(int i=1;i<=n;i++){
            string x,y;
            cin>>x>>y;
            if(!mp[x])mp[x]=++num;
            if(!mp[y])mp[y]=++num;
            vis[y]=1;
        }
        if(vis.size()==num-1)puts("Yes");
        else puts("No");
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