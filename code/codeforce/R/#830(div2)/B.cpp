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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int fl=-1;
	int num=0;
	for(int i=0;i<n;i++){
		char c=s[i];
		if(fl==-1&&c=='1')fl=1;
		if(fl==0&&c=='1')num++,fl=1;
		if(fl==1&&c=='0')fl=0;
	}
	num*=2;
	if(fl==0)num++;
	cout<<num<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}
/*
8
1
1			0
3
101			2
5
11001		2
2
10			1
4
1100		1
6
100010		3
10
0000110000	1
7
0101010		5

*/