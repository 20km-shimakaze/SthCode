#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string t,s;
void solve()
{
    int n;
	cin>>n>>s;
	s=" "+s;
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(s[i]==s[n-i+1]&&s[i]=='0')sum++;
	}
	int flag=0;
	if(n%2){
		if(s[n/2+1]=='0'){
			if(sum)flag=1;
			else flag=2;
		}
		else flag=2;
	}
	else{
		if(sum)flag=2;
		else flag=0;
	}
	if(flag==1)puts("ALICE");
	else if(flag==2)puts("BOB");
	else puts("DRAW");
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}
