#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
string s;
int a[200005],b[200005];
void solve()
{
	int da=0,db=0;
    cin>>s;
    int su0=0;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1')su0++;
        a[i+1]=su0;
    }
    int ans=a[n];
    int t=a[n];
    for(int i=t;i<=n;i++){
        ans=min(t-a[i]+a[i-t],ans);
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}