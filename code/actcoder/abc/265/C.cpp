#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
string s[503];
int h,w;
int vis[503][503];
void solve()
{
	cin>>h>>w;
	for(int i=1;i<=h;i++){
		cin>>s[i];
		s[i]=" "+s[i];
	}
	int x=1,y=1;
	int fl=0;
	while(1){
		if(vis[x][y])break;
		vis[x][y]=1;
		fl=0;
		if(s[x][y]=='U'&&x!=1)x-=1,fl=1;
		if(s[x][y]=='D'&&x!=h)x+=1,fl=1;
		if(s[x][y]=='L'&&y!=1)y-=1,fl=1;
		if(s[x][y]=='R'&&y!=w)y+=1,fl=1;
		if(!fl){
			cout<<x<<" "<<y<<endl;
			return;
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