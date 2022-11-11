#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
vector<int>v,vv;
int F(int x)
{
	int ans=0;
	auto it=upper_bound(v.begin(),v.end(),x)-1;
	// cout<<"dis="<<it-v.begin()<<endl;
	int dis=it-v.begin();
	int num=*it;
	// cout<<num<<"&"<<endl;
	ans+=vv[dis];
	// cout<<ans<<"*"<<endl;
	x-=v[dis];
	ans+=(1+x)*x/2;
	return ans;
}
void solve()
{
	int ans=0;
	int i;
	v.push_back(0);
	vv.push_back(0);
	for(i=1;ans<=1e12;i++)ans+=i,v.push_back(ans),vv.push_back(vv.back()+ans);
	// cout<<"v: ";
	// for(int i=0;i<=10;i++)cout<<v[i]<<" ";cout<<endl;
	// cout<<"vv: ";
	// for(int i=0;i<=10;i++)cout<<vv[i]<<" ";cout<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int l,r;
		cin>>l>>r;
		int an1=F(r);
		int an2=F(l-1);
		// cout<<"an1="<<an1<<endl;
		// cout<<"an2="<<an2<<endl;
		cout<<an1-an2<<endl;
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