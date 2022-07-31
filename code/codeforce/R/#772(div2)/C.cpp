#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a[200005];
int n;
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(a[n]<a[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(a[n]<0){
        if(is_sorted(a+1,a+1+n))puts("0");
        else puts("-1");
        return;
    }
    cout<<n-2<<endl;
    for(int i=1;i<=n-2;i++){
        cout<<i<<" "<<n-1<<" "<<n<<endl;
    }
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}