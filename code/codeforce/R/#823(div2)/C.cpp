#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
string s;
void solve()
{
	cin>>s;
	vector<int>v(10,0);
	int di=s[s.size()-1]-'0';
	for(int i=s.size()-1;i>=0;i--){
		int num=s[i]-'0';
		if(num<=di)v[num]++,di=num;
		else v[min(num+1,9ll)]++;
	}
	for(int i=0;i<=9;i++){
		for(int j=1;j<=v[i];j++)cout<<i;
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}