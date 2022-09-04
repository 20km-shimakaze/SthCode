#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int fa[N];
int n,m;
int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void lian(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy)fa[xx]=yy;
}
int vis[N];
void solve()
{
    int n,m;
    while(cin>>n,n){
        cin>>m;
        for(int i=1;i<=n;i++)fa[i]=i;
        for(int i=1;i<=m;i++){
            int x,y;
            scanf("%lld%lld",&x,&y);
            lian(x,y);
        }
        int num=0;
        for(int i=1;i<=n;i++){
            if(fa[i]==i)num++;
        }
        cout<<num-1<<'\n';
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