#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
    int n,k;
    cin>>n>>k;
    int t;
    if(k%2){
        t=k/2;
        cout<<max((ll)0,min(t,n-t))<<endl;
    }
    else{
        t=k/2-1;
        cout<<max((ll)0,min(t,n-t-1))<<endl;
    }
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}