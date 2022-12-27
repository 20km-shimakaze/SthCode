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
int a[42];
void solve()
{
	int n,k;
	cin>>k>>n;
	int num=n-k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	int t=1;
	for(int i=k;i>=1;i--){
		if(num>=t){
			num-=t;
			// cout<<"num"<<t<<endl;
			for(int j=i;j<=k;j++){
				a[j]+=t;
			}
			t++;
		}
		else break;
	}
	for(int i=1;i<=k;i++)cout<<a[i]<<" ";cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}