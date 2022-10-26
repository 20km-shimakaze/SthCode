#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int s[N];
int vis[N];
int n;
void solve()
{
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)cin>>s[i],sum+=s[i],vis[i]=1;
    if(abs(sum)%2){
        cout<<-1<<endl;
        return;
    }
    int dis=0;
    for(int i=2;i<=n;i++){
        if(i-dis==1)continue;
        if(sum==0)continue;
        if(sum<0){
            if(s[i]==-1)vis[i]=-1,sum+=2,dis=i;
        }
        else{
            if(s[i]==1)vis[i]=-1,sum-=2,dis=i;
        }
    }
    // for(int i=1;i<=n;i++){
    //     cout<<vis[i]<<" ";
    // }
    // cout<<endl;
    dis=0;
    vector<P>ans;
    P a;
    dis=1;
    for(int i=2;i<=n;i++){
        if(vis[i]==1){
            ans.push_back({dis,i-1});
            dis=i;
        }
    }
    ans.push_back({dis,n});
    cout<<ans.size()<<endl;
    for(auto[x,y]:ans){
        cout<<x<<" "<<y<<endl;
    }
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}