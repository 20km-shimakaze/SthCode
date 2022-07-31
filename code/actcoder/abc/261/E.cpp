#include <bits/stdc++.h>
using namespace std;
//#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,m;
int x,a,c,t;
void solve()
{
	cin>>n>>c;
	int at=0;
	int ti=0;
	int l=0,r=INT_MAX;
	for(int i=1;i<=n;i++){
		cin>>t>>a;
		if(t==1){
			l&=a;
			r&=a;
		}
		else if(t==2){
			l|=a;
			r|=a;
		}
		else if(t==3){
			l^=a;
			r^=a;
		}
		int ans=0;
		for(int i=0;i<=31;i++){
			int temp=(c>>i)&1;
			if(temp){
				if(r>>i&1)ans+=1<<i;
			}
			else{
				if(l>>i&1)ans+=1<<i;
			}
		}
		cout<<ans<<endl;
		c=ans;
	}
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}