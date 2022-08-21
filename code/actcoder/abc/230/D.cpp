#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
struct poi
{
    int l,r;
    bool friend operator<(poi a,poi b){
        if(a.r!=b.r)return a.r>b.r;
        return a.l>b.l;
    }
};
priority_queue<poi>q;
void solve()
{
	int n,d;
    cin>>n>>d;
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        q.push({l,r});
    }
    int ans=1,di=-1;
    while(q.size()){
        auto [l,r]=q.top();
        //cout<<l<<" "<<r<<endl;
        q.pop();
        if(di==-1){
            di=r;
            continue;
        }
        if(di+d>l)continue;
        else{
            ans++;
            di=r;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}