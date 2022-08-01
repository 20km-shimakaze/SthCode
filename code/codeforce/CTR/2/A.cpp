#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int INF=4557430888798830399;
int n,m;
string a,b;
void solve()
{
	cin>>n>>m>>a>>b;
	int fl=0;
	for(int i=1;i<m;i++){
		if(b[m-i]!=a[n-i])fl=1;
	}
	//cout<<fl<<endl;
	int flag=0;
	for(int i=n-m;i>=0;i--){
		if(b[0]==a[i])flag=1;
		//cout<<"*"<<a[i]<<endl;
	}
	//cout<<flag<<endl;
	if(!fl&&flag)puts("YES");
	else puts("NO");
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}