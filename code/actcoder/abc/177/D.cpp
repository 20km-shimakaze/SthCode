#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int fa[N],a[N];
int n,m;
int vis[N];
int find(int p)
{
    return p==fa[p]?p:fa[p]=find(fa[p]);
}
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i,vis[i]=1;
    for(int i=1;i<=m;i++){
        int ai,bi;
        cin>>ai>>bi;
        int f1=find(ai),f2=find(bi);
        int na=vis[f1],nb=vis[f2];
        if(f1!=f2){
            fa[f1]=f2,vis[f1]+=nb,vis[f2]+=na;
            //cout<<na<<"-----"<<nb<<endl;
        }
    }
    int an=0;
    for(int i=1;i<=n;i++){
        an=max(vis[i],an);
    }
    cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}