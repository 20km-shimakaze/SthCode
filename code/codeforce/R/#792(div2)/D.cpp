/*
计算假设删除这个数他对整个答案的减小的贡献值，排序，然后直接计算即可
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,k;
P s[200005];
int a[200005];
bitset<200005>vis;
void solve()
{
	cin>>n>>k;
    int ans=0,sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i].first=a[i]-(n-i);
        s[i].second=i;
        //cout<<"&"<<s[i].first<<endl;
    }
    vis.reset();
    sort(s+1,s+1+n,greater<P>());
    for(int i=1;i<=k&&i<=n;i++){
        vis[s[i].second]=1;
    }
    int pos=0;
    for(int i=1;i<=n;i++){
        if(vis[i])pos++;
        else ans+=pos+a[i];
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