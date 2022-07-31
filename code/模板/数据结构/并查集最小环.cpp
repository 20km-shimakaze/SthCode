#include <bits/stdc++.h>
using namespace std;
int n,s[200005],d[200005];
int minn=1e9+7;
int find(int x)
{
    if(x!=s[x]){
        int last=s[x];
        s[x]=find(last);
        d[x]+=d[last];
    }
    return s[x];
}
void lian(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy){
        s[xx]=yy;
        d[x]=d[y]+1;
    }
    else minn=min(minn,d[x]+d[y]+1);
}
void slove()
{
    cin>>n;
    for(int i=1;i<=n;i++)s[i]=i;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        lian(i,a);
    }
    cout<<minn<<endl;
}
int main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)slove();
}