#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n;
void solve()
{
	cin>>n;
    if(n&1){
        cout<<1<<" ";
        for(int i=2;i<=n;i++){
            if(i&1)cout<<i-1<<" ";
            else cout<<i+1<<" ";
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(i&1)cout<<i+1<<" ";
            else cout<<i-1<<" ";
        }
    }
    cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}
/*
1 2 3 4 5
1 3 2 5 4  

1 2 3 4
2 1 4 3
*/