#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int st[N],home[N];
int a[1003][1003];
int link[N];
int n;
bitset<53>vis;
int dfs(int x)
{
    for(int i=1;i<=n;i++){
        if(st[i]&&a[x][i]&&!vis[i]){
            vis[i]=1;
            if(!link[i]||dfs(link[i])){
                link[i]=x;
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        vis[i]=0;
        link[i]=0;
        st[i]=0;
        home[i]=0;
    }
    for(int i=1;i<=n;i++)cin>>st[i];
    for(int i=1;i<=n;i++)cin>>home[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            if(x&&st[j])a[i][j]=1;
            else if(i==j&&st[j])a[i][j]=1;
            else a[i][j]=0;
        }
    }
    int fl=0;
    for(int i=1;i<=n;i++){
        vis.reset();
        if(!st[i]||(st[i]&&!home[i])){
            if(!dfs(i)){
                fl=1;
                break;
            }
        }
    }
    if(fl)cout<<"T_T"<<endl;
    else cout<<"^_^"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}