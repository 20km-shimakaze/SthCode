#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
struct poi{int x,y;}a[200005];
const int mod=998244353;
int n,m;
priority_queue<int,vector<int>,greater<int>>q;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+1+n,[&](poi a,poi b){
		return a.x<b.x;
	});
	for(int i=1;i<=n;i++){
		//cout<<a[i].x<<"*"<<a[i].y<<endl;
		if(q.size()<m){
			q.push(a[i].x+a[i].y);
			continue;
		}
		int t=q.top();
		//cout<<t<<endl;
		q.pop();
		if(a[i].x>t)q.push(a[i].x+a[i].y);
		else q.push(t+a[i].y);
	}
	int ans=0;
	while(q.size()){
		int t=q.top();
		q.pop();
		ans=max(t,ans);
	}
	cout<<ans<<endl;
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}
/*
1
3 2
1 3
2 3
3 4
*/