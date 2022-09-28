#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int x=abs(x1-x2);
	int y=abs(y1-y2);
	if(x>y)swap(x,y);
	int fl=0;
	if((x==1&&y==1)||(x==1&&y==3)||(x==0&&y==4)||(x==2&&y==4)||(x==3&&y==3)||(x==0&&y==2))fl=1;
	puts(fl?"Yes":"No");
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}