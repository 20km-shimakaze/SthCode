#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt;
int low[N],dfn[N],idx;
struct Edge
{
    int to,next;
}e[N];
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
int ans[N];
void tarjan(int x,int fa)
{
    dfn[x]=low[x]=++idx;
    int num=0;
    for(int i=head[x];i;i=e[i].next){
        int y=e[i].to;
        if(!dfn[y]){
            tarjan(y,fa);
            low[x]=min(low[x],low[y]);
            if(low[y]>=dfn[x]){
                num++;
                if(num>1||x!=fa)ans[x]=1;
            }
        }
        else low[x]=min(low[x],dfn[y]);
    }
}
int n;
void solve()
{
	cin>>n;
    int x,y;
    while(cin>>x>>y,x||y){
        add(x,y);
        add(y,x);
    }
    cin>>x>>y;
    for(int i=1;i<=n;i++){
        if(!dfn[i])tarjan(i,i);
    }
    for(int i=1;i<=n;i++){
        if(i==x||i==y)continue;
        if(ans[i]){
            cout<<i<<endl;
            return;
        }
    }
    cout<<"No solution"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}