#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
int dis[103][103];
vector<int>v[103];
void solve()
{
    cin>>n;
    for(int i=3;i<=n;i++){
        cout<<"? "<<i<<" 1"<<endl;
        int x;
        cin>>x;
        dis[i][1]=dis[1][i]=x;
    }
    for(int i=3;i<=n;i++){
        cout<<"? "<<i<<" 2"<<endl;
        int x;
        cin>>x;
        dis[i][2]=dis[2][i]=x;
    }
    int f1=0,f2=0;
    int num1=0,num2=0;
    for(int i=3;i<=n;i++){
        if(dis[i][1]==1&&dis[i][2]==2)f1=1,num1=i;
        if(dis[i][2]==1&&dis[i][1]==2)f2=1,num2=i;
    }
    if(f1&&f2){
        int x;
        cout<<"? "<<num1<<" "<<num2<<endl;
        cin>>x;
        if(x==1)cout<<"! 3"<<endl;
        else cout<<"! 1"<<endl;
    }
    else if(f1||f2){
        cout<<"! 1"<<endl;
    }
    else{
        int num=0;
        vector<int>v;
        for(int i=3;i<=n;i++){
            if(dis[i][1]==1)v.push_back(i);
        }
        int ans=INF;
        for(int x:v)ans=min(ans,dis[x][2]);
        cout<<"! "<<ans+1<<endl;
    }
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}