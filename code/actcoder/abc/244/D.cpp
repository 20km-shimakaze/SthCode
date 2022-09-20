#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
char s[3][2];
void solve()
{
	for(int i=0;i<=1;i++){
		for(int j=1;j<=3;j++){
			cin>>s[j][i];
		}
	}
	int num=0;
	for(int i=1;i<=3;i++){
		if(s[i][0]==s[i][1])num++;
	}
	if(num==1)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}