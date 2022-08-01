/*
直接暴力一个个算和睡觉时间差值最小的数
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,h,m;
int ans=INT_MAX;
void solve()
{
	cin>>n>>h>>m;
    ans=INT_MAX;
    int ta=h*60+m;
    int a,b;
    while(n--){
        cin>>a>>b;
        int tb=a*60+b;
        ans=min((tb-ta+24*60)%(24*60),ans);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}