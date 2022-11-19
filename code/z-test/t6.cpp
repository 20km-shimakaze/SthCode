#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=2e9;
const int mod=998244353;
int s[103][103],ss[103][103];
int n,m;
void solve()
{
	while(cin>>n>>m){
		memset(s,0x3f,sizeof(s));
		memset(ss,0x3f,sizeof(ss));
		for(int i=1;i<=m;i++){
			int x,y,c;
			cin>>x>>y>>c;
			s[y][x]=s[x][y]=ss[y][x]=ss[x][y]=min(c,s[x][y]);
		}	
		int ans=INF;
		for(int k=1;k<=n;k++){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i==k||j==k||i==j)continue;
					ans=min(ans,ss[i][k]+ss[k][j]+s[i][j]);
				}
			}
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					s[i][j]=min(s[i][j],s[i][k]+s[k][j]);
				}
			}
		}
		if(ans==INF)cout<<"It's impossible."<<endl;
		else cout<<ans<<endl;
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