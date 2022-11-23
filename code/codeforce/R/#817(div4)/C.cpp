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
	vector<string>v[3];
	map<string,int>mp;
	int n;
	cin>>n;
	for(int id=0;id<3;id++){
		for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			v[id].push_back(s);
			mp[s]++;
		}
	}
	int an1=0,an2=0,an3=0;
	for(string s:v[0]){
		if(mp[s]==1)an1+=3;
		if(mp[s]==2)an1+=1;
	}
	for(string s:v[1]){
		if(mp[s]==1)an2+=3;
		if(mp[s]==2)an2+=1;
	}
	for(string s:v[2]){
		if(mp[s]==1)an3+=3;
		if(mp[s]==2)an3+=1;
	}
	cout<<an1<<" "<<an2<<" "<<an3<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}