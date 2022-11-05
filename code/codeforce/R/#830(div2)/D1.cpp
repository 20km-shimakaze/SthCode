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
	map<int,int>m1,m2;
	int num=0;
	cin>>num;
	while(num--){
		char op;
		int x;
		cin>>op>>x;
		if(op=='+'){
			m1[x]=1;
			m2[x]=1;
		}
		else{
			int t=m2[x];
			if(t==0)t=1;
			while(1){
				if(m1.count(t*x)==0){
					cout<<t*x<<endl;
					m2[x]=t;
					break;
				}
				t++;
			}
		}
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}