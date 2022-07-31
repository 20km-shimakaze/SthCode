#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
void solve()
{
	cin>>n;
	int ans=0;
	vector<int>a(n+2);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans+=a[i];
	}
	if(ans!=0){
		cout<<"No"<<endl;
		return ;
	}
	int t=0,fl=1;
	for(int i=n;i>=1;i--){
		if(a[i]==0&&fl)continue;
		fl=0;
		t+=a[i];
		if((t==0&&i!=1)||t>0){
			cout<<"No"<<endl;
			return ;
		}
	}
	cout<<"Yes"<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}