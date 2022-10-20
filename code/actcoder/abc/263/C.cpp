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
	int n,m;
	cin>>n>>m;
	vector<string>v;
	for(int i=0;i<(1<<m);i++){
		int num=__builtin_popcount(i);
		if(num==n){
			string s;
			for(int j=0;j<=m;j++){
				if((1<<j)&i)s+=j+1;
			}
			v.push_back(s);
		}
	}
	sort(v.begin(),v.end());
	for(string s:v){
		for(char c:s){
			cout<<(int)c<<" ";
		}
		cout<<endl;
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