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
	vector<int>v;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),[&](int a,int b){
		return a>b;
	});
	int a=0,b=0;
	int f1=0,f2=0;
	for(int i=0;i<v.size();i++){
		if((v[i]&1)==0){
			if(b){
				b+=v[i];
				f1=1;
				break;
			}
			b+=v[i];
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i]&1){
			if(a){
				a+=v[i];
				f2=1;
				break;
			}
			a+=v[i];
		}
	}
	int ans=-1;
	if(f1)ans=max(ans,b);
	if(f2)ans=max(ans,a);
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}