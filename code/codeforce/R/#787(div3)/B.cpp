/*
贪心，从后向前遍历查看大小，否则/2，直到成立
最后检查一遍，看是否成功构造成功
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int long long
int n;
int a[100];
void solve()
{
	cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    // for(int i=1;i<=n;i++){
    //     if(a[i]>(1<<(i-1))){
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    for(int i=n;i>=2;i--){
        while(a[i]<=a[i-1]){
            if(a[i-1]==0)break;
            a[i-1]/=2;
            ans++;
        }
    }
    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<n;i++){
        if(a[i]==a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}