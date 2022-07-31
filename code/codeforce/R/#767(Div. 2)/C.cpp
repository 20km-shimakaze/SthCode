#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v,ans;
int vis[1000005],p[1000005];
int n,sum,loss,pos;
map<int ,int>vv;
void slove()
{
    cin>>n;
    sum=n;
    pos=0;
    int x;
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        cin>>p[i];
        vis[p[i]]++;
    }
    int b=1;
    ans.clear();
    while(1){
        int dis=0,last=0;
        while(vis[dis])dis++;
        ans.push_back(dis);
        dis--;
        int t=0;
        vv.clear();
        for(int i=b;i<=n;i++){
            vis[p[i]]--;
            if(p[i]==t){
                t++;
                while(vv[t]){
                    vv[t]=0;
                    t++;
                }
            }
            else vv[p[i]]=1;
        if(t==dis+1){
            b=i+1;
            break;
        }
        }
        if(b-1==n)break;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    puts("");
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}