#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int ans=0;
vector<int>v;
deque<int>q;
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int num=0;
	int la=-1;
	for(int x:v){
		if(la==x)num++;
		else la=x,q.push_back(x);
	}
	while(q.size()>=2){
		int t=q.front();
		if(t==ans+1){
			q.pop_front();
			ans++;
			continue;
		}
		if(t<=ans){
			q.pop_front(),num++;
			continue;
		}
		if(num>=2){
			ans++;
			num-=2;
			continue;
		}
		q.pop_back();
		num++;
	}
	int an1=ans+(q.size()+num)/2;
	int t=ans;
	// cout<<ans<<" "<<num<<endl;
	ans+=num/2;
	// cout<<ans<<endl;
	// cout<<q.front()<<endl;
	if(q.size()&&(ans+1==q.front()||(ans>=q.front()&&t<q.front())))ans++;
	cout<<max(ans,an1)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}