#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
deque<int>q;
int n;
string s;
void solve()
{
	cin>>n>>s;
	q.push_back(n);
	//cout<<s<<endl;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='R')q.push_front(i);
		else q.push_back(i);
	}
	while(q.size())cout<<q.front()<<" ",q.pop_front();
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}