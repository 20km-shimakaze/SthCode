#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int n;
    cin>>n;
    if(n%2||n==2){
        cout<<-1<<endl;
        return;
    }
    int ans1=n/6;
    if(n%6)ans1++;
    cout<<ans1<<" "<<n/4<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}