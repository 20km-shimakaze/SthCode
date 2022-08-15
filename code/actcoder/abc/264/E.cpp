/*
利用并查集逆向加边
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=5e5+7;
const int mod=998244353;
struct poi
{
    int u,v;
}s[N];
int n,m,k;
int q[N],Q;
int fa[N],vis[N],cnt[N];
int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void solve()
{
	cin>>n>>m>>k;
    for(int i=1;i<=k;i++){
        cin>>s[i].u>>s[i].v;
    }
    cin>>Q;
    for(int i=n+1;i<=n+m;i++)fa[i]=0;
    for(int i=1;i<=n;i++)fa[i]=i,cnt[i]=1;
    for(int i=1;i<=Q;i++)cin>>q[i],vis[q[i]]=1;
    for(int i=1;i<=k;i++){
        if(!vis[i]){
            int xx=find(s[i].u);
            int yy=find(s[i].v);
            if(xx!=yy){
                if(xx==0)swap(xx,yy);
                fa[xx]=yy;
                cnt[yy]+=cnt[xx];
            }
        }
    }
    stack<int>st;
    for(int i=Q;i>=1;i--){
        st.push(cnt[0]);
        int di=q[i];
        int xx=find(s[di].u);
        int yy=find(s[di].v);
        if(xx!=yy){
            if(xx==0)swap(xx,yy);
            fa[xx]=yy;
            cnt[yy]+=cnt[xx];
        }
    }
    while(st.size())cout<<st.top()<<endl,st.pop();
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}