#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    int a1=INT_MAX,a2=INT_MAX;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x<a1){
            a1=x;
            a2=i;
        }
    }
    if(n%2){
        puts("Mike");
        return;
    }
    if(a2%2==0)puts("Mike");
    else puts("Joe");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}