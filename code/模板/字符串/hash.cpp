#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
#define ull unsigned long long
string s;
ull has[200006],p[200005];
ull base=29;
ull getHash(int l,int r)//l r×Ö·û´®hashÖµ
{
	return has[r]-has[l-1]*p[r-l+1];
}
void solve()
{
	set<ull>se;
	cin>>s;
	int n=s.size();
	s=" "+s;
	for(int i=1;i<=n;i++){
		has[i]=has[i-1]*base+s[i]-'a'+1;
	}
	p[0]=1;
	int ans=0;
	for(int i=1;i<=n;i++){
		p[i]=p[i-1]*base;
	}
	for(int len=2;len<=n;len+=2){
		for(int i=1;i+len-1<=n;i++){
			if(getHash(i,i+len/2-1)==getHash(i+len/2,i+len-1))se.insert(getHash(i,i+len/2-1));
		}
	}
	cout<<se.size()<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}