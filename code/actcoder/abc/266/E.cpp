#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n;
void solve()
{
	cin>>n;
    double an=3.5;
    for(int i=2;i<=n;i++){
        double t=0;
        for(int j=1;j<=6;j++){
            if(j<=an)t+=an;
            else t+=j;
        }
        an=t/6;
    }
    printf("%.6lf",an);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}