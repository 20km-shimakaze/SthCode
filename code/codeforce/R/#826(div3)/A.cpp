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
void solve()
{
	string a,b;
	cin>>a>>b;
	if(a.back()==b.back()){
		if(a.size()==b.size()){
			cout<<"="<<endl;
			return;
		}
		if(a.back()=='L'){
			cout<<(a.size()<b.size()?"<":">")<<endl;
			return;
		}
		else cout<<(a.size()>b.size()?"<":">")<<endl;
	}
	else{// S M L
		if(a.back()=='S'){
			cout<<"<"<<endl;
			return;
		}
		if(b.back()=='S'){
			cout<<">"<<endl;
			return;
		}
		if(a.back()=='L'){
			cout<<">"<<endl;
			return;
		}
		if(b.back()=='L'){
			cout<<"<"<<endl;
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