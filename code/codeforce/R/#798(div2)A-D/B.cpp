#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,a[1003],b[1003],c[1003];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[i]=i;
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i]==b[i])swap(b[i],b[i+1]);
    }
    if(a[n]==b[n])swap(b[n-1],b[n]);
    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
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