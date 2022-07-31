#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a[100];
void solve()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        for(int j=n;j>=1;j--){
            if(i==j)continue;
            cout<<j<<" ";
        }
        puts("");
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