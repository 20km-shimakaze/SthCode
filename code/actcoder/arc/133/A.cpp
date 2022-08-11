/*
找规律可以发现，应当是让小的尽可能向前，那么就可以删去最开始出现的逆序数字
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int a[N];
int vis[N];
void solve()
{
	int ma=0,di=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int x=a[n];
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            x=a[i];
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=x)cout<<a[i]<<" ";
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}