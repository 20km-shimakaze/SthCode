#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
string s,ss;
int a[20004];
int dep[20004];
bitset<204> vis;
void dfs(int fa,int p,int su)
{
    //cout<<p<<"***"<<endl;
    if(fa==p||vis[p])return;
    ss+=s[p-1];
    vis[p]=1;
    dfs(fa,a[p],su+1);
}
int check(string t)
{
    for(int i=0;i<t.size();i++){
        int fl=0;
        if(t.size()%(i+1)==0){
            for(int j=0;j<t.size();j++){
                if(t[j]!=t[j%(i+1)])fl=1;
            }
            if(!fl)return i+1;
        }
    }
    return -1;
}
void solve()
{
	cin>>n>>s;
    vis.reset();
    for(int i=1;i<=n;i++)cin>>a[i],dep[i]=0;
    dep[0]=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(vis[i+1])continue;
        ss=s[i];
        dfs(i+1,a[i+1],1);
        //cout<<ss<<endl;
        v.push_back(check(ss));
    }
    int ans=1;
    for(int i=0;i<v.size();i++){
        int tt=__gcd(ans,v[i]);
        ans*=v[i];
        ans/=tt;
    }
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