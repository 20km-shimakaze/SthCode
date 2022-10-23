#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	string s;
	int n,k;
	cin>>n>>k;
	cin>>s;
	int ans=0;
	for(int len=1;len<=n;len++){
		int sum=0;
		if(n%len)continue;
		int T=n/len;
		for(int i=0;i<len;i++){
			map<char,int>mp;
			for(int j=0;j<T;j++){
				mp[s[j*len+i]]++;
			}
			int su=0;
			for(auto[key,val]:mp){
				su=max(val,su);
			}
			sum+=su;
		}
		sum=n-sum;
		if(sum<=k){
			cout<<len<<endl;
			return;
		}
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