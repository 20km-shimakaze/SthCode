#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,m;
map<string,int>mp;
string s[N];
vector<int>v[N];
int vis[N];
struct poi
{
	int id,step;
	vector<int>an;
};
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		mp[s[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int su=0;
			for(int k=0;k<m;k++){
				if(s[i][k]!=s[j][k])su++;
			}
			if(su==1){
				v[mp[s[i]]].push_back(mp[s[j]]);
				v[mp[s[j]]].push_back(mp[s[i]]);
			}
		}
	}
	string sa,sb;
	cin>>sa>>sb;
	if(sa==sb){
		cout<<0<<endl;
		cout<<sa<<endl<<sb<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		int su=0;
		for(int k=0;k<m;k++){
			if(s[i][k]!=sa[k])su++;
		}
		if(su==1)v[0].push_back(i);
		su=0;
		for(int k=0;k<m;k++){
			if(s[i][k]!=sb[k])su++;
		}
		if(su==1)v[i].push_back(n+1);
	}
	queue<poi>q;
	q.push({0,0});
	while(q.size()){
		auto [id,step,at]=q.front();
		q.pop();
		if(n+1==id){
			cout<<step-1<<endl;
			cout<<sa<<endl;
			for(int i=1;i<step;i++){
				cout<<s[at[i]]<<endl;
			}
			cout<<sb<<endl;
			return;
		}
		if(vis[id])continue;
		vis[id]=1;
		for(int next:v[id]){
			at.push_back(id);
			q.push({next,step+1,at});
			at.pop_back();
		}
	}
    cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}