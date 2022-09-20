#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
string s;
void solve()
{
	cin>>n>>s;
	int x=0,y=0,di=0;
	for(int i=0;i<n;i++){
		if(s[i]=='S'){
			if(di==0){
				x++;
			}
			else if(di==1){
				y--;
			}
			else if(di==2){
				x--;
			}
			else{
				y++;
			}
		}
		else{
			di++;
			di%=4;
		}
	}
	cout<<x<<" "<<y<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}