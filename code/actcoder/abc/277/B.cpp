#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
map<char,int>mp1,mp2;
map<string,int>mp3;
void solve()
{
	cin>>n;
	int fl=0;
	mp1['H']=mp1['D']=mp1['C']=mp1['S']=1;
	mp2['A']=mp2['2']=mp2['3']=mp2['4']=mp2['5']=mp2['6']=mp2['7']=mp2['8']=mp2['9']=mp2['T']=mp2['J']=mp2['Q']=mp2['K']=1;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(mp1[s[0]]&&mp2[s[1]]&&!mp3[s]){

		}
		else fl=1;
		mp3[s]=1;
	}
	if(fl)cout<<"No"<<endl;
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