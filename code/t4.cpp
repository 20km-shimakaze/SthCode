#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,p;
struct poi
{
    int l,r;
}s[N];
void solve()
{
    cout<<"-------------------"<<endl;
	cin>>n>>p;
    int nim=0;
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        while(l<=r){
            int ll=r/p;
            int sum=min(r-ll+1,r-l+1);
            nim^=sum;
            r-=sum;
            cout<<"sum="<<sum<<endl;
            cout<<"nim="<<nim<<endl;
        }
    }
    if(nim)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}