#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int Euler(int tot)
{
    int num=tot;
    for(int i=2; i<=tot; i++){
        if(tot%i==0)
            num=num/i*(i-1);
        while(tot%i==0)
            tot/=i;
    }
    return num;
}
void solve()
{
	
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}