#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
void solve()
{
	cin>>n;
    int k=0;
    while((1<<k)<n)k++;
    k--;
    for(int i=(1<<k)-1;i>=0;i--){
        cout<<i<<" ";
    }
    for(int i=(1<<k);i<n;i++){
        cout<<i<<" ";
    }
    puts("");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}