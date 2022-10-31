#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
string s[20];
int check(int x,int y)
{
	return x>=1&&y>=1&&x<=9&&y<=9&&s[x][y]=='#';
}
void solve()
{
	for(int i=1;i<=9;i++){
		cin>>s[i];
		s[i]=" "+s[i];
	}
	int ans=0;
	set<P>se;
	for(int x1=1;x1<=9;x1++){
		for(int y1=1;y1<=9;y1++){
			if(s[x1][y1]=='.')continue;
			for(int x2=1;x2<=9;x2++){
				for(int y2=1;y2<=9;y2++){
					if(x1==x2&&y1==y2)continue;
					if(s[x2][y2]=='.')continue;
					int x3=x1+(y2-y1);
					int y3=y1+(x1-x2);
					int x4=x2+(y2-y1);
					int y4=y2+(x1-x2);
					if(check(x3,y3)&&check(x4,y4)){
						ans++;
					}
				}
			}
		}
	}
	// cout<<se.size()<<endl;
	cout<<ans/4<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}