#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int X[20],Y[20];
double dis[1<<17][17];
int n,m;
void solve()
{
	cin>>n>>m;
	for(int i=0;i<n+m;i++)cin>>X[i]>>Y[i];
	for(int i=0;i<(1<<n+m);i++){
		for(int j=0;j<n+m;j++){
			dis[i][j]=1e150;
		}
	}
	for(int i=0;i<n+m;i++)dis[1<<i][i]=hypot(X[i],Y[i]);
	double ans=1e150;
	for(int i=1;i<(1<<n+m);i++){
		for(int j=0;j<n+m;j++){
			if(dis[i][j]!=1e150){
				int speed=1<<__builtin_popcount(i>>n);
				if((i&((1<<n)-1))==(1<<n)-1){
					ans=min(ans,dis[i][j]+hypot(X[j],Y[j])/speed);
				}
				// if((i&(1<<n)-1)==(1<<n)-1)
				// {
				// 	ans=min(ans,dis[i][j]+hypot(X[j],Y[j])/speed);
				// }
				for(int k=0;k<n+m;k++){
					if(!((i>>k)&1))dis[i|1<<k][k]=min(dis[i|1<<k][k],dis[i][j]+hypot(X[k]-X[j],Y[k]-Y[j])/speed);
				}
			}
		}
	}
	printf("%.6lf",ans);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}