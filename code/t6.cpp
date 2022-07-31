#include<bits/stdc++.h>
using namespace std;
int n=8;
int num[9]={0};
bool vis[9]={0}; 
void dfs(int step)
{
    if(step==n+1)
    {
        for(int i=1;i<=n;i++)
            cout<<num[i]<<" ";
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            num[step]=i;
            vis[i]=1;
            dfs(step+1);
            vis[i]=0;
        }
    }
}
int main()
{
    dfs(1);
    return 0;
}