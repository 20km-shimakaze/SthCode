#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	deque<int>q;
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push_back(x);
	}
	int tag=0;
	while(q.size()){
		int fl=0;
		while(q.back()^tag==0)q.pop_back(),fl=1;
		if(q.front()==0){
			q.pop_front();
			tag^=1;
			fl=1;
		}
		if(!fl)break;
	}
	if(q.size())cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}