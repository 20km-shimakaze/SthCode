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
	int ans=0;
	int h1,h2,h3,w1,w2,w3;
	cin>>h1>>h2>>h3>>w1>>w2>>w3;
	for(int i=1;i<=30;i++){
		for(int j=1;j<=30;j++){
			for(int k=1;k<=30;k++){
				for(int l=1;l<=30;l++){
					int a1=h1-i-k;
					int a2=h2-j-l;
					int b1=w1-i-j;
					int b2=w2-k-l;
					int c1=w3-a1-a2;
					int c2=h3-b1-b2;
					if(a1>0&&a2>0&&b1>0&&b2>0&&c1>0&&c2>0&&c1==c2)ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}