#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[100005];
vector<int>v[16003];
int f[16003];
void dfs(int p,int fa)
{
	f[p]=a[p];
	for(int i=0;i<v[p].size();i++){
		int y=v[p][i];
		if(y==fa)continue;
		dfs(y,p);
		//f[p]=max(f[p],f[p]+a[y]);
		if(f[y]>0)f[p]+=f[y];//子树最大答案是正数
	}
}
void solve()
{
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,0);
	int ans=f[1];
	for(int i=1;i<=n;i++)
	ans=max(ans,f[i]);
	//for(int i=1;i<=n;i++)cout<<f[i]<<" ";
	cout<<ans<<endl;
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)solve();
}