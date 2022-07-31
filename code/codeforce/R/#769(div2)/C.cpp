/*
理论上最多的操作次数就是b-a次，那么，暴力看一遍，有没有操作能使得达成的操作数最小
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a,b;
void solve()
{
	cin>>a>>b;
    int ans=b-a;
    for(int i=0;i<=b-a;i++){
        int aa=a+i;
        ans=min(ans,i+((aa|b)-b)+1);
        int bb=b+i;
        ans=min(ans,i+(a|bb)-bb+1);
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