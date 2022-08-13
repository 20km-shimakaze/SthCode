#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
void solve()
{
	int x,a,d,n;
    cin>>x>>a>>d>>n;
    n--;
    if(d<0)x=-x,a=-a,d=-d;
    int l=-1,r=n+1,di=LLONG_MAX;
    int ai=0;
    while(l<r-1){
        int mid=(l+r)>>1;
        int t=a+mid*d;
        if(t<=x)l=mid;
        else r=mid;
        di=min(di,abs(t-x));
        if(di>abs(t-x)){
            di=abs(t-x);
            ai=mid;
        }
        //cout<<di<<endl;
    }
    //cout<<ai<<endl;
    if(ai-1>=0){
        di=min(di,abs(x-(a+(ai-1)*d)));
    }
    if(ai+1<=n)di=min(di,abs(x-(a+(ai+1)*d)));
    if(ai-2>=0){
        di=min(di,abs(x-(a+(ai-2)*d)));
    }
    if(ai+2<=n)di=min(di,abs(x-(a+(ai+2)*d)));
    cout<<di<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}