#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int a=0,b=0,x;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x&1)a++;
        else b++;
    }
    cout<<min(a,b)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}