#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
map<int,int>mp;
int n,q;
bitset<200005> vis;
int ans=0;
int a[200005];
void solve()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i];
        vis[i]=1;
    }
	int w;
	for(int k=1;k<=q;k++)
	{
		int fl,i,x;
		cin>>fl;
		if(fl==1)
		{
			cin>>i>>x;
			if(vis[i])
			{
				ans-=a[i];
				a[i]=x;
				ans+=x;
			}
			else
			{
				vis[i]=1;
				ans-=w;
				a[i]=x;
				ans+=x;
			}
		}
		else
		{
			cin>>x;
			ans=n*x;
			vis.reset();
			w=x;
		}
        cout<<ans<<endl;
	}
}
signed main()
{
	int __;
	//cin >> __;
	__=1;
	while (__--)solve();
}