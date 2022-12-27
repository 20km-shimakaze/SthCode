#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>a(k+1);
	priority_queue<int>q;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	int end=k;
	int maxx=n*m-3;
	for(int i=1;i<=k;i++){
		if(q.size()>=maxx){
			cout<<"TIDAK"<<endl;
			return;
		}
		q.push(a[i]);
		while(q.top()==end){
			end--;
			q.pop();
		}
	}
	cout<<"YA"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}