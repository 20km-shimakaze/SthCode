#include <bits/stdc++.h>
using namespace std;
int ans[100001],n,m,bj[100001];
int sq1[10][10],sq2[10][10];
struct node
{
    int x,y;
}bian[100];
void dfs(int k)
{
    int i;
    if(k>n)
    {
        int bz=0;
        for(i=1;i<=m;i++)
        {
            if(sq2[ans[bian[i].x]][ans[bian[i].y]]!=1)
            {
                return;
            }
        }
        cout<<"Yes";
        exit(0);
    }
    for(i=1;i<=n;i++)
    {
        if(!bj[i])
        {
            ans[k]=i;
            bj[i]=1;
            dfs(k+1);
            bj[i]=0;
            ans[k]=0;
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        sq1[y][x]=1,sq1[x][y]=1;
        bian[i].x=x,bian[i].y=y;
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        sq2[x][y]=1,sq2[y][x]=1;
    }
    dfs(1);
    cout<<"No";
    return 0;
}