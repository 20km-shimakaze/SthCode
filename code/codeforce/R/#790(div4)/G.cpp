#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
string s;
int n;
int a[100005];
vector<int>v[40004];
int ans=0;
P dfs(int p)
{
    int w=0,b=0;
    for(int i=0;i<v[p].size();i++){
        P t;
        int next=v[p][i];
        t=dfs(next);
        w+=t.first;
        b+=t.second;
    }
    if(s[p-1]=='W')w++;
    else b++;
    if(w==b)ans++;
    P aa;
    aa.first=w;
    aa.second=b;
    return aa;
}
void solve()
{
	cin>>n;
    for(int i=2;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)v[i].clear();
    for(int i=2;i<=n;i++){
        v[a[i]].push_back(i);
    }
    cin>>s;
    ans=0;
    P t1;
    t1.first=0;
    t1.second=0;
    dfs(1); 
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}