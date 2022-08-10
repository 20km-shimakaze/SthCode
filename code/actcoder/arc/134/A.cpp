/*
模拟匹配，记录覆盖的右端点，然后遍历查看需要数量的贡献
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int a[N];
int n,len,w;
void solve()
{
	cin>>n>>len>>w;
    for(int i=1;i<=n;i++)cin>>a[i];
    int r=0,an=0;
    for(int i=1;i<=n;i++){
        if(a[i]>r){
            an+=(w-1+a[i]-r)/w;
        }
        r=max(r,a[i]+w);
    }
    if(r<len)an+=(w-1+len-r)/w;
    cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}