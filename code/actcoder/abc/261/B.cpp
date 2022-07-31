#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n;
char s[1003][1003];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>s[i][j];
		}
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(i==j&&s[i][j]!='-')flag=1;
			if(s[i][j]=='D'&&s[j][i]!='D')flag=1;
			if(s[i][j]=='L'&&s[j][i]!='W')flag=1;
			if(s[i][j]=='W'&&s[j][i]!='L')flag=1;
		}
	}
	if(flag)puts("incorrect");
	else puts("correct");
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}