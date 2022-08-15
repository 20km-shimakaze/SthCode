#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<string,int> P;
const int N=2e5+7;
const int mod=998244353;
string s;
map<string,int>mp;
void solve()
{
	cin>>s;
    queue<P>q;
    q.push({s,0});
    while(q.size()){
        auto [t,step]=q.front();
        q.pop();
        if(mp[t])continue;
        mp[t]=step;
        if(t=="atcoder"){
            cout<<step<<endl;
            return;
        }
        for(int i=0;i<6;i++){
            swap(t[i],t[i+1]);
            q.push({t,step+1});
            swap(t[i],t[i+1]);
        }
    }
    cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}