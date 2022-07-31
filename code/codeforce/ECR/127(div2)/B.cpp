#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,m;
int a[200005],b[200005];
vector<int>v;
void solve()
{
	cin>>n;
	v.clear();
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==1){
		cout<<"YES"<<endl;
		return;
	}

	for(int i=2;i<=n;i++){
		int t=a[i]-a[i-1];
		if(t>3){
			cout<<"NO"<<endl;
			return;
		}
		else if(t>=2)v.push_back(t);
	}
	if(v.size()>=3)cout<<"NO"<<endl;
	else if(v.size()==2&&v[1]+v[0]>=5)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}