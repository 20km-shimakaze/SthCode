#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
/*
������һ�δγ�kֱ������b
*/
int a,b,k;
void solve()
{
	cin>>a>>b>>k;
    int ans=0;
    while(1){
        if(a>=b)break;
        a*=k;
        ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}