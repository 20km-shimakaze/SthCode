#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[100];
void solve()
{
	cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i]-1;
    }
    if(ans%2){
        cout<<"errorgorn"<<endl;
    }
    else cout<<"maomao90"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}