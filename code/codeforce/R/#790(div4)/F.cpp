#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,k;
int a[200005];
int vis[200005];
void solve()
{
	cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int ans=0;
    vector<int>v;
    int sum=0,fl=a[1],f0=0;
    for(int i=1;i<=n;i++){
        if(fl==a[i]&&f0)continue;
        if(a[i]==fl){
            sum++;
        }
        else{
            sum=1;
            f0=0;
            fl=a[i];
        }
        if(sum>=k){
            f0=1;
            v.push_back(fl);
            continue;
        }
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    if(v.size()==0){
		cout<<-1<<endl;
		return ;
	}
    int ma=1,l=v[0],r=v[0];
	int s=v[0],t=v[0],len=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]-v[i-1]!=1)
		{
			if(len>ma)
			{
				ma=len;
				l=s;
				r=v[i-1];
			}
			len=1;
			s=v[i];
		}
		else len++;
	}
	if(len>ma){
		ma=len;
		l=s;
		r=v[v.size()-1];
	}
	cout<<l<<" "<<r<<endl;
    //cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}