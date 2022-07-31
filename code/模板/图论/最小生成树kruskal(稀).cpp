#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fa[5003];
int ans,n,m,cnt;
struct poi
{
    int a,b,v;
}edge[200005];
bool cmp(poi a,poi b)
{
    return a.v<b.v;
}
int find(int x)
{
    while(x!=fa[x])x=fa[x]=fa[fa[x]];
    return x;
}
void kruskal()
{
    sort(edge+1,edge+1+m,cmp);
    for(int i=1;i<=m;i++){
        int eu=find(edge[i].a);
        int ev=find(edge[i].b);
        if(ev==eu)continue;
        ans+=edge[i].v;
        fa[ev]=eu;
        if(++cnt==n-1)break;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        cin>>edge[i].a>>edge[i].b>>edge[i].v;
    }
    kruskal();
    if(cnt!=n-1)cout<<"orz"<<endl;
    else cout<<ans<<endl;
}