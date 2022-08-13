#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=1e7+7;
priority_queue<int>q;
int n;
void solve()
{
	cin>>n;
	while(q.size())q.pop();
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	int an=0;
	while(q.size()>1){
		int a=q.top();
		q.pop();
		int b=q.top();
		q.pop();
		int s=a+b;
		if(s>=0)an+=s,an%=mod,q.push(s);
		else break;
	}
	cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}