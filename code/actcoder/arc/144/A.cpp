/*
因为要尽可能大，所以要选择最大的一位数偶数（8），那么/2的答案就是由4组成的，余的放前面
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int dp[5003];//以i结尾的最长子序列
int a[1003];
void solve()
{
	int n;
    cin>>n;
    cout<<2*n<<endl;
    if(n%4)cout<<n%4;
    for(int i=1;i<=n/4;i++){
        cout<<4;
    }puts("");
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}