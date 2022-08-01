#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int s[100004],n,m;
void solve()
{
	cin>>n>>m;
	priority_queue<int>q;
    for(int i=1;i<=m;i++)cin>>s[i];
	sort(s+1,s+1+m);
    for(int i=1;i<m;i++){
        q.push({s[i+1]-s[i]-1});
    }
	q.push({n-s[m]+s[1]-1});//
	int ans=0,da=0;
	while(q.size()&&q.top()-da*2>0){
		int t=q.top();
		//cout<<t<<endl;
		q.pop();
		t-=2*da;
		if(t>2)da+=2;
		else if(t==1||t==2)da++;
		ans+=max((int)1,t-1);
	}
	cout<<n-ans<<endl;
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}