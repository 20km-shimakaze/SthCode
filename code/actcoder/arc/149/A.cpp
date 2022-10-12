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
	int n,m;
	cin>>n>>m;
	int tn=-1,t=0;
	for(int i=1;i<=9;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			// cnt=(cnt*10ll+i);
			cnt=(cnt*10+i)%m;
			if((cnt==0)&&(j>tn||(j==tn&&i>t))){
				tn=j,t=i;
			}
		}
	}
	if(~tn){
		for(int i=1;i<=tn;i++)cout<<t;
	}
	else cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}