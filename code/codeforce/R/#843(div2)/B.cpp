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
int cnt[N];
int n;
vector<vector<int>>v;
void wei()
{
	for(int i=0;i<n;i++){
		for(int x:v[i])cnt[x]--;
	}
}
void solve()
{
	cin>>n;
	v.clear();
	for(int i=1;i<=n;i++){
		vector<int>a;
		int k;
		cin>>k;
		for(int j=1;j<=k;j++){
			int x;
			cin>>x;
			a.push_back(x);
			cnt[x]++;
		}
		v.push_back(a);
	}
	for(int i=0;i<n;i++){
		int fl=0;
		for(int x:v[i]){
			if(cnt[x]<=1)fl=1;
		}
		if(!fl){
			cout<<"YES"<<endl;
			wei();
			return;
		}
	}
	wei();
	cout<<"NO"<<endl;
}
signed main()
{
	IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}