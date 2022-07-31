#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=2;i<n;i++){
        if(a[i-1]<a[i]&&a[i+1]<a[i]){
            ans++;
            if(i+2<n){
                a[i+1]=max(a[i],a[i+2]);
            }
            else a[i+1]=a[i];
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
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