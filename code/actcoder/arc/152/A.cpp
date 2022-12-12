#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N];
void solve()
{
	int n,l;
	cin>>n>>l;
	priority_queue<int>q;
	q.push({l});
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=l,num=0;
	int fl=0;
	for(int i=1;i<n;i++){
		if(a[i]==1){
			if(ans>=2)ans-=2;
		}
		else{
			if(ans>=2)ans-=3;
			else fl=1;
		}
	}
	if(a[n]==2&&ans<2)fl=1;

	cout<<(!fl?"Yes":"No")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}