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
char op;
string s;
void solve()
{
	cin>>n>>op>>s;
	s=s+s;
	int ans=0;
	int num=-1;
	for(int i=0;i<2*n;i++){
		if(num!=-1)num++;
		if(s[i]==op&&num==-1){
			num=0;
			continue;
		}
		if(s[i]=='g'){
			ans=max(ans,num);
			num=-1;
			continue;
		}
	}
	if(op=='g')ans=0;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}