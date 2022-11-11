#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,sum;
map<string,int>mp;
string s[N],ss[N];
int vis[N];
int flag=0;
void dfs(int p,int num,string tt)
{
	// cout<<p<<" "<<num<<" "<<tt<<endl;
	if(flag)return;
	if(num>16)return;
	if(p==n){
		if(num<3)return;
		if(mp[tt])return;
		cout<<tt<<endl;
		flag=1;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		string t=tt;
		t+=s[i];
		if(p==n-1)dfs(p+1,num+s[i].size(),t);
		else{
			for(int j=1;j<=16-sum-p;j++){
				t+='_';
				dfs(p+1,num+j+s[i].size(),t);
			}
		}
		vis[i]=0;
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		sum+=s[i].size();
	}
	for(int i=1;i<=m;i++){
		cin>>ss[i];
		mp[ss[i]]=1;
	}
	dfs(0,0,"");
	if(!flag)cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}