#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
string s[20];
void solve()
{
	for(int i=0;i<10;i++){
		cin>>s[i];
	}
	int x1,x2,y1,y2;
	int fl=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(s[i][j]=='#'){
				x1=i;
				y1=j;
				fl=1;
				break;
			}
		}
		if(fl)break;
	}
	fl=0;
	for(int i=9;i>=0;i--){
		for(int j=9;j>=0;j--){
			if(s[i][j]=='#'){
				x2=i,y2=j;
				fl=1;
				break;
			}
		}
		if(fl)break;
	}
	cout<<x1+1<<" "<<x2+1<<endl;
	cout<<y1+1<<" "<<y2+1<<endl; 
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}