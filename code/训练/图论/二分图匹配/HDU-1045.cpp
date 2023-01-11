/*
本题可以发现，在一个位置上横的和竖的是不能有其他炮存在的
所以可以将思路转到横竖上，从横向看，每一个连续横的都可以看作一个点
然后从竖向看同理，将这两个分开成为二分图，进行匹配
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e3+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
string s[N];
int a[1003][1003],b[1003][1003];
int n;
bitset<N>vis;
int w[103][N],num,link[N];
int dfs(int x)
{
	for(int i=1;i<=n;i++){
		if(!vis[i]&&w[x][i]){
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
	while(cin>>n,n){
		for(int i=1;i<=n;i++)cin>>s[i],s[i]=" "+s[i];
		int num=1,fl=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(fl&&s[i][j]=='X')num++,fl=0;
				a[i][j]=-1;
				if(s[i][j]=='.')fl=1,a[i][j]=num;
			}
			if(fl)num++,fl=0;
		}
		fl=0;
		for(int j=1;j<=n;j++){
			for(int i=1;i<=n;i++){
				if(fl&&s[i][j]=='X')num++,fl=0;
				b[i][j]=-1;
				if(s[i][j]=='.')fl=1,b[i][j]=num;
			}
			if(fl)num++,fl=0;
		}
		// for(int i=1;i<=n;i++){
		// 	for(int j=1;j<=n;j++){
		// 		cout<<a[i][j]<<" ";
		// 	}cout<<endl;
		// }
		// cout<<endl;
		// for(int i=1;i<=n;i++){
		// 	for(int j=1;j<=n;j++){
		// 		cout<<b[i][j]<<" ";
		// 	}cout<<endl;
		// }
		memset(link,0,sizeof(link));
		memset(w,0,sizeof(w));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]==-1)continue;
				int x=a[i][j];
				int y=b[i][j];
				w[x][y]=1;
			}
		}
		n=num;
		int ans=0;
		for(int i=1;i<=n;i++){
			vis.reset();
			if(dfs(i))ans++;
		}
		cout<<ans<<endl;
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