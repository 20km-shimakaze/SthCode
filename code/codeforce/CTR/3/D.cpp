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
int n,m;
int a[N];
vector<int>pri;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=1;
	for(int i=2;i<=n;i++){
		int k=a[i-1]/a[i];
		if(a[i-1]%a[i]){
			cout<<"0"<<endl;
			return;
		}
		// 求1~m/a[i]与k互质个数
		pri.clear();
		int kk=k;
		for(int i=2;i*i<=k;i++){
			if(k%i==0){
				pri.push_back(i);
				while(k%i==0)k/=i;
			}
		}
		if(k!=1)pri.push_back(k);
		k=kk;
		int ma=m/a[i];
		int num=0;
		for(int i=1;i<(1<<pri.size());i++){
			int nu=0,x=1;
			for(int j=0;j<pri.size();j++){
				if(i&(1<<j)){
					nu++;
					x*=pri[j];
				}
			}
			if(nu%2)num+=ma/x;
			else num-=ma/x;
		}
		num=ma-num;
		num%mod;
		ans=(ans*num)%mod;
	}
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