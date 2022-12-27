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
string aa,bb;
int a[N],b[N];
vector<P>ans;
void OUT()
{
	cout<<"YES"<<endl;
	cout<<ans.size()<<endl;
	for(auto[x,y]:ans){
		cout<<x<<" "<<y<<endl;
	}
}
void solve()
{
	cin>>n>>aa>>bb;
	ans.clear();
	for(int i=0;i<n;i++){
		a[i+1]=aa[i]-'0';
		b[i+1]=bb[i]-'0';
	}
	int fl=0;
	for(int i=1;i<=n;i++){
		if(a[i]==b[i])fl=1;
	}
	if(!fl){
		ans.push_back({1,n});
		for(int i=1;i<=n;i++)a[i]^=1;
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]){
			cout<<"NO"<<endl;
			return;
		}
	}
	int num=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1)num++;
	}
	if(num==0){
		OUT();
		return;
	}
	if(num==n){
		ans.push_back({1,1});
		ans.push_back({2,n});
		OUT();
		return;
	}
	if(a[1]==1){
		ans.push_back({1,1});
		ans.push_back({2,n});
		for(int i=1;i<=n;i++){
			a[i]^=1;
			b[i]^=1;
		}
	}
	fl=0;
	int di=1;
	while(1){
		while(a[di+1]==fl&&di+1<=n)di++;
		ans.push_back({1,di});
		fl^=1;
		if(di==n){
			if(fl==1)ans.push_back({1,n});
			OUT();
			return;
		}
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}