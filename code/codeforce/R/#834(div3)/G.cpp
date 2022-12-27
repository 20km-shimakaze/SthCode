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
	int n;
	cin>>n;
	vector<int>a(n+1),b(n+1);
	for(int i=2;i<=n;i+=2){
		cin>>a[i];
		b[a[i]]=i;
	}
	priority_queue<int>q;
	for(int i=n;i>=1;i--){
		if(!b[i]){
			if(q.size()==0){
				cout<<-1<<endl;
				return;
			}
			else{
				a[q.top()-1]=i;
				q.pop();
			}
		}
		else q.push(b[i]);
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}