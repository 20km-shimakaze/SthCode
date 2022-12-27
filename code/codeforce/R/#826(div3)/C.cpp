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
int a[N],su[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=INF;
	int num=0;
	for(int len=1;len<=n;len++){
		int fl=0;
		num+=a[len];
		int p=0;
		int maxx=len;
		int mann=0;
		for(int i=len+1;i<=n;i++){
			if(p+a[i]==num)p=0,mann++,maxx=max(maxx,mann),mann=0;
			else if(p+a[i]<num)p+=a[i],mann++;
			else if(p+a[i]>num){
				fl=1;
				break;
			}
		}
		if(p!=num&&p!=0)fl=1;
		if(!fl){
			ans=min(ans,maxx);
		}
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