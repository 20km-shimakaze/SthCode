#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2003;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int t,k;
int a[2003][2003];
int su[2003][2003];
void init()
{
	for(int i=1;i<N;i++){
		a[i][1]=1%k;
		a[i][i]=1%k;
		for(int j=2;j<i;j++){
			a[i][j]=(a[i-1][j]+a[i-1][j-1])%k;
		}
	}
	for(int i=1;i<N;i++){
		for(int j=1;j<=i;j++){
			su[i][j]=su[i][j-1]+su[i-1][j]-su[i-1][j-1]+(a[i][j]==0);
		}
		su[i][i+1]=su[i][i];
	}
}
void solve()
{
	cin>>t>>k;
	init();
	// for(int i=1;i<=10;i++){
		// for(int j=1;j<=i;j++)cout<<a[i][j]<<" ";cout<<endl;
	// }
	// cout<<"***"<<endl;
	// for(int i=1;i<=10;i++){
		// for(int j=1;j<=i;j++)cout<<su[i][j]<<" ";cout<<endl;
	// }
	// cout<<"***"<<endl;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(m>n)m=n;
		cout<<su[n+1][m+1]<<endl;
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