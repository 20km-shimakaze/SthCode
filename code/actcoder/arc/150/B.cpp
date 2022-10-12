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
	int a,b;
	cin>>a>>b;
	int minn=b-a;
	if(a>=b){
		cout<<a-b<<endl;
		return;
	}
	if(a<=1e5){
		for(int i=0;i<=minn;i++){
			int x=i+a;
			int t=x-b%x;
			minn=min(minn,t+i);
			if(t==x){
				minn=min(minn,i);
				break;
			}
		}
	}
	else{
		for(int d=1;d<=100000;d++){
			int ad=a*d;
			if(ad<=b){
				int y=(d-b%d)%d;
				int x=(b-ad+y)/d;
				minn=min(minn,x+y);
			}
			else{
				int y=ad-b;
				minn=min(minn,y);
			}
		}
	}
	cout<<minn<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}