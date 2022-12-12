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
	cin>>s;
	int fl=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!='Y'&&s[i]!='e'&&s[i]!='s')fl=1;
		if(i-1>=0){
			if((s[i]=='Y'&&s[i-1]!='s')||(s[i]=='e'&&s[i-1]!='Y')||(s[i]=='s'&&s[i-1]!='e'))fl=1;
		}
		if(i+1<s.size()){
			if((s[i]=='Y'&&s[i+1]!='e')||(s[i]=='e'&&s[i+1]!='s')||(s[i]=='s'&&s[i+1]!='Y'))fl=1;
		}
	}
	cout<<(fl?"NO":"YES")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}