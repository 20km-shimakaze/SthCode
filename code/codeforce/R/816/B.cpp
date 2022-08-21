#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,k,b,s;
void solve()
{
	cin>>n>>k>>b>>s;
    if((k-1)*n+k*b<s||b*k>s){
        cout<<-1<<endl;
        return;
    }
    cout<<min(k*b+k-1,s)<<" ";
    s-=min(k*b+k-1,s);
    for(int i=2;i<=n;i++){
        if(s>0){
            cout<<min(k-1,s)<<" ";
            s-=min(k-1,s);
        }
        else cout<<0<<" ";
    }
    puts("");
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}