#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
string s[103];
int n;
vector<int>v[103];
int in[103];
set<int>se[103];
void solve()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>s[i];
	for(int i=0;i<n;i++)v[i].clear(),in[i]=0,se[i].clear();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]=='0')continue;
			v[i].push_back(j);
			in[j]++;
		}
	}
	int idx=-1;
	queue<int>q;
	for(int i=0;i<n;i++){
		if(in[i])continue;
		// se[i].insert(++idx);
		q.push(i);
	}
	while(q.size()){
		int now=q.front();
		q.pop();
		se[now].insert(++idx);
		// cout<<"now="<<now<<endl;
		for(int x:v[now]){
			for(int y:se[now]){
				se[x].insert(y);
			}
			// se[x].insert(++idx);
			in[x]--;
			if(!in[x])q.push(x);
		}
	}
	for(int i=0;i<n;i++){
		cout<<se[i].size()<<" ";
		for(int x:se[i])cout<<x+1<<" ";
		cout<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}