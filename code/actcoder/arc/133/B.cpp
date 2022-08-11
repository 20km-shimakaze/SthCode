#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int a[N],b[N];
int n;
int pos[N],dp[N];
vector<int>v[N];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i],pos[b[i]]=i;
    for(int i=1;i<=n;i++){
		for(int j=a[i];j<=n;j+=a[i]){
			v[pos[j]].push_back(i);
		}
	}
	// for(int i=1;i<=n;i++){
	// 	for(int di:v[i])cout<<di<<" ";
	// 	puts("");
	// }
	int len=0;
	for(int i=1;i<=n;i++){
		reverse(v[i].begin(),v[i].end());
		// for(int di:v[i])cout<<di<<" ";
		// puts("&");
		for(int x:v[i]){
			if(dp[len]<x)dp[++len]=x;
			else *lower_bound(dp+1,dp+len+1,x)=x;
		}
	}
	cout<<len<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}