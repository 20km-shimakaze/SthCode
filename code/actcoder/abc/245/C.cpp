#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
int a[maxn],b[maxn],dp[maxn],ep[maxn];
int n,k;
signed main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)cin>>b[i];
	dp[1]=1;
	ep[1]=1;//第一个默认可以选
	for(int i=2;i<=n;i++){//从第二个开始判断是否有可以连到a[i]/b[i]的方法
		if(dp[i-1]&&abs(a[i]-a[i-1])<=k)dp[i]=1;//a[i-1]可选，尝试在a[i-1]->a[i]连接,那么连线可以延伸到a[i]
		if(dp[i-1]&&abs(b[i]-a[i-1])<=k)ep[i]=1;//同理
		if(ep[i-1]&&abs(a[i]-b[i-1])<=k)dp[i]=1;
		if(ep[i-1]&&abs(b[i]-b[i-1])<=k)ep[i]=1;
	}
	if(ep[n]||dp[n])cout<<"Yes"<<endl;//只要有一个可以选即可
	else cout<<"No"<<endl;
}