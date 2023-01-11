#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,a[N];
int su[N];
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i],su[i]=su[i-1]+a[i];
    int sum=0;
    priority_queue<int,vector<int>,greater<int>>q;
    priority_queue<int>qq;
    int ans=0;
    int cnt=0;
    for(int i=m;i>=1;i--){
        while(su[i]<su[m]){
            if(qq.size()==0){
                cout<<"&&&"<<endl;
                return;
            }
            int t=qq.top();
            qq.pop();
            su[m]-=2*t;
            cnt-=2*t;
            ans++;
            // cout<<"&&"<<i<<endl;
        }
        qq.push(a[i]);
    }
    for(int i=m+1;i<=n;i++){
        q.push(a[i]);
        su[i]+=cnt;
        while(su[i]<su[m]){
            if(q.size()==0){
                cout<<"***"<<endl;
                return;
            }
            int t=q.top();
            q.pop();
            su[i]-=2*t;
            cnt-=2*t;
            ans++;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}