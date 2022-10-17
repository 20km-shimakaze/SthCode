#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	bitset<N>vis;
	sort(a.begin(),a.end(),greater<int>());
	int sum=a[0];
	cout<<sum<<" ";
	vis[0]=1;
	while(1){
		int maxn=-1,pos=0;
		for(int i=0;i<n;i++){
			if(vis[i])continue;
			int dx=(a[i]|sum)-sum;
			if(dx>maxn)maxn=dx,pos=i;
		}
		if(maxn<=0)break;
		vis[pos]=1;
		sum|=a[pos];
		cout<<a[pos]<<" ";
	}
	for(int i=0;i<n;i++){
		if(!vis[i])cout<<a[i]<<" ";
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}