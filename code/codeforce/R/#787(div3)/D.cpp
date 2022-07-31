/*
建树，遍历一遍每当有分支，则是一个新的线
存入输出即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int long long
typedef vector<int> VI;
int n;
int a[200005];
int ans;
vector<int> v[200005],ans1[200005];
int sua=0,su=0;
void dfs(int fa)
{
    ans1[sua].push_back(fa);
    if(v[fa].size()){
        dfs(v[fa][0]);
    }
    for(int i=1;i<v[fa].size();i++){
        sua++;
        dfs(v[fa][i]);
    }
}
void solve()
{
	cin>>n;
    int be;
    sua=1;
    su=0;
    for(int i=1;i<=n;i++)v[i].clear(),ans1[i].clear();
    for(int i=1;i<=n;i++){
        //cin>>a[i];
        scanf("%d",&a[i]);
        if(a[i]==i){
            be=i;
            continue;
        }
        v[a[i]].push_back(i);
    }
    ans=0;
    dfs(be);
    cout<<sua<<endl;
    for(int i=1;i<=sua;i++){
        cout<<ans1[i].size()<<endl;
        for(int j=0;j<ans1[i].size();j++){
            //cout<<ans1[i][j]<<" ";
            printf("%d ",ans1[i][j]);
        }
        puts("");
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