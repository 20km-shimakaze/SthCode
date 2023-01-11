#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
int a[N];
void solve()
{
	cin>>n;
	int sum=0;
	vector<int>v;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int p=a[i];
		while(p%2==0)p/=2,sum++;
		int t=i,num=0;
		while(t%2==0)t/=2,num++;
		if(num)v.push_back(num);
	}
	sort(v.begin(),v.end(),greater<int>());
	int ans=0;
	for(int i=0;i<v.size();i++){
		if(sum>=n)break;
		sum+=v[i];
		ans++;
	}
	if(sum>=n)cout<<ans<<endl;
	else cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}