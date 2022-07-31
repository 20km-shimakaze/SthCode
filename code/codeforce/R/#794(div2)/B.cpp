#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[100005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    int maxx=a[1];
    for(int i=1;i<=n;i++){
        if(a[i]<maxx){
            ans++;
            maxx=a[i+1];
        }
        else maxx=max(maxx,a[i]);
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