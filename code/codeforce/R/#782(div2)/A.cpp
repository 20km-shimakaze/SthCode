#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int ,int> P;
int n,r,b;
int vis[200];
void solve()
{
    cin>>n>>r>>b;
    memset(vis,0,sizeof(vis));
    while(1){
        for(int i=1;i<=b+1&&r>0;i++){
            vis[i]++;
            r--;
        }
        if(r==0)break;
    }
    for(int i=1;i<=b;i++){
        for(int j=1;j<=vis[i];j++)cout<<'R';
        cout<<'B';
    }
    for(int i=1;i<=vis[b+1];i++){
        cout<<'R';
    }
    cout<<endl;
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}