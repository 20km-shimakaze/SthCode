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
	map<int,int>mp;
	int n;
	cin>>n;
	int fl=0;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		for(int j=2;j*j<=b;j++){
			if(b%j==0){
				if(mp.count(j))mp[j]=a%j;
				else{
					if(mp[j]%j!=a%j)fl=1;
				}
				b/=j;
			}
		}
		if(b!=1){
			if(mp.count(b))mp[b]=a%b;
			else if(mp[b]%b!=a%b)fl=1;
		}
	}
	cout<<(fl?"No":"Yes")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}