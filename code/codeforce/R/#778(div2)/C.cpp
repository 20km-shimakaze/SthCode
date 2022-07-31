/*
还原出一个蛋糕，重新模拟切蛋糕
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
priority_queue<int> q,a;
void solve()
{
	int sum=0;
	cin>>n;
	int x;
	while(q.size())q.pop();
	while(a.size())a.pop();
	for(int i=1;i<=n;i++){
		scanf("%lld",&x);
		a.push(x);
		sum+=x;
	}
	q.push(sum);
	// while(a.size()){
	// 	cout<<a.top()<<" ";
	// 	a.pop();
	// }
	// puts("");
	while(q.size()){
		if(q.top()==a.top()){
			a.pop();
			q.pop();
			continue;
		}
		if(a.top()>q.top()){
			break;
		}
		int t=q.top();
		q.pop();
		q.push(t/2);
		q.push(t-t/2);
	}
	if(q.size()||a.size()){
		puts("NO");
	}
	else puts("YES");
}
signed main()
{
	int __;
	cin>>__;
	while(__--)solve();
}