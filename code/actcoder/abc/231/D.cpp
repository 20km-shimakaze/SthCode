#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int maxn=1e4+7;
int vis[100005];
int fa[100005];
typedef pair<int,int> P;
set<P>se;
int find(int p)
{
    return fa[p]==p?fa[p]:find(fa[p]);
}
void solve()
{
	int n,m;
    cin>>n>>m;
    int a,b;
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    string ans="Yes";
    P p1,p2;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        p1.first=a;
        p1.second=b;
        p2.first=b;
        p2.second=a;
        if(!se.count(p1)&&!se.count(p2)){
            vis[a]++;
            vis[b]++;
            se.insert(p1);
            se.insert(p2);
        int f1=find(a);
        int f2=find(b);
        if(f1==f2)ans="No";
        fa[f1]=f2;
        }
    }
    for(int i=1;i<=n;i++){
        if(vis[i]>2)ans="No";
    }
    cout<<ans<<endl;
}
signed  main()
{
	solve();
}