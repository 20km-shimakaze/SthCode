#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    n=n/10*10;
    for(int i=0;i<=9;i++){
        if((i+n)%7==0){
            cout<<i+n<<endl;
            return;
        }
    }
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}