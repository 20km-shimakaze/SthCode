#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int dp[103][20004];//到第i张牌，能到j，用k面
int n,s;
int a[103],b[103];
int fl=0;
int vis[103][2];
void dfs(int i,int num)
{
	if(fl)return;
	if(num==0&&i==0&&!fl){
		fl=1;
		for(int i=1;i<=n;i++){
			if(vis[i][0])cout<<"H";
			else cout<<"T";
		}
		return;
	}
	if(i==0)return;
	if(num-a[i]>=0&&dp[i-1][num-a[i]]){
		vis[i][0]=1;
		dfs(i-1,num-a[i]);
	}
	vis[i][0]=0;
	if(num-b[i]>=0&&dp[i-1][num-b[i]]){
		vis[i][1]=1;
		dfs(i-1,num-b[i]);
	}
	vis[i][1]=0;
}
void solve()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=s;j++){
			if(dp[i-1][j]){
				dp[i][j+a[i]]=1;
				dp[i][j+b[i]]=1;
			}
		}
	}
	if(!dp[n][s]){
		cout<<"No"<<endl;
		return;
	}
	cout<<"Yes"<<endl;
	dfs(n,s);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}