/*
按到数据只有8,可以考虑直接暴力搜索的方法
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
vector<string>v;
int n;
int a[20][20];
int ans=0;
int vis[20];
void dfs(int p,int num)
{
    if(p==2*n+1){
        ans=max(ans,num);
        return;
    }
    if(vis[p]){
        dfs(p+1,num);
        return;
    }
    else vis[p]++;
    for(int i=p+1;i<=2*n;i++){
        if(vis[i])continue;
        vis[i]++;
        dfs(p+1,num^a[p][i]);
        vis[i]--;
    }
    vis[p]--;
}
void solve()
{
	cin>>n;
    for(int i=1;i<=2*n;i++){
        for(int j=i+1;j<=2*n;j++){
            cin>>a[i][j];
        }
    }
    dfs(1,0);
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}