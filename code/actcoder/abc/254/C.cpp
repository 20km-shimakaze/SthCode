#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
vector<int>v[N];
void solve()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[i%k].push_back(x);
		// cout<<i%k<<" "<<x<<endl;
	}
	for(int i=0;i<k;i++)sort(v[i].begin(),v[i].end());
	// for(int x:v[0])cout<<x;
	int idx=0;
	int t=0;
	for(int i=0;idx!=n;i++){
		// cout<<"i="<<i<<endl;
		// cout<<"idx="<<idx<<endl;
		for(int j=0;j<k;j++){
			// cout<<"&"<<" "<<j;
			if(idx==n)continue;
			++idx;
			// cout<<"idx="<<idx<<"   ";
			if(t>v[j][i]){
				cout<<"No"<<endl;
				return;
			}
			t=v[j][i];
			// cout<<t<<" ";
		}
	}
	cout<<"Yes"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}