#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
class T{
    int a,b;
    public : void show(){
        cout<<a<<" "<<b<<endl;
    }
    T(int a,int b){
        this->a=a;
        this->b=b;
    }
};
void solve()
{
    T a(1,2);
    a.show();
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}