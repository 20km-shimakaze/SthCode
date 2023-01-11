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
vector<int>num;
int n;
int a[N],cnt[N],s[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],s[i]=s[i-1]^a[i];
	cnt[0]=1;
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int num:num){
			ans+=cnt[s[i]^num];
		}
		cnt[s[i]]++;
	}
	for(int i=1;i<=n;i++)cnt[s[i]]--;
	cout<<(n+1)*n/2-ans<<endl;
	// cout<<ans<<endl;
}
signed main()
{
	//IOS
	for(int i=0;i*i<=(1<<19);i++)num.push_back(i*i);
	int __=1;
	cin >> __;
	while (__--)
		solve();
}