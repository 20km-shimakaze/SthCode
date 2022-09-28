#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int check(int x)
{
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
void solve()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	for(int i = a; i <= b; i ++){
		bool flag = true;
		for(int j = c; j <= d; j ++){
			if(check(i + j))flag = false;
		}
		if(flag){
			puts("Takahashi");
			return;
		} 
	}	
	puts("Aoki");
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}