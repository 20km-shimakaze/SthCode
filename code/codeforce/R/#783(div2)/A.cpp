/*
贪心，构造，可以考虑从左上角一路到斜着到相对应的行，
然后由于不允许重复走一样的方向，所以向同一个方向实际连续走两步要求是走4步，单独的一步只要一步
注意特判 网格为一条直线的时候
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n,m;
    cin>>n>>m;
    if(n==1||m==1){
        if(max(n,m)>2){
            cout<<-1<<endl;
        }
        else if(max(n,m)==2) cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    int ans=0;
    int t=min(n,m);
    ans+=2*(t-1);
    n-=t;
    m-=t;
    int ts=max(n,m);
    int tt=ts%2;
    ans+=4*(ts/2);
    if(tt)ans++;
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}