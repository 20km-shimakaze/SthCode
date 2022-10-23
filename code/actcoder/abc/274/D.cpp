#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
vector<int>a,b;
int n;
set<int>sa,sb;
void solve()
{
	cin>>n;
	int x,y;
	cin>>x>>y;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		if(i&1){
			a.push_back(x);
		}
		else b.push_back(x);
	}
	vector<int>an;
	int fa=0,fb=0;
	sa.insert(a[0]);
	for(int i=1;i<a.size();i++){
		set<int>st;
		for(int num:sa){
			st.insert(num+a[i]);
			st.insert(num-a[i]);
		}
		swap(st,sa);
	}
	if(sa.count(x))fa=1;

	sb.insert(0);
	for(int i=0;i<b.size();i++){
		set<int>st;
		for(int num:sb){
			st.insert(num+b[i]);
			st.insert(num-b[i]);
		}
		swap(st,sb);
	}
	if(sb.count(y))fb=1;
	// cout<<fa<<" "<<fb<<endl;
	if(fa&&fb)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}