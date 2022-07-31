#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
bitset<200005>vis;
void solve()
{
	string s;
    cin>>s;
    vis.reset();
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(vis[s[i]-'0'])ans+=2,vis.reset();
        else vis[s[i]-'0']=1;
    }
    cout<<s.size()-ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}