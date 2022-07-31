#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
string s[53];
int n,m;
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    int minn=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int sum=0;
            for(int i1=0;i1<s[i].size();i1++){
                sum+=abs(s[i][i1]-s[j][i1]);
            }
            minn=min(minn,sum);
        }
    }
    cout<<minn<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}