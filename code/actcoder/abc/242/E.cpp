#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1000006;
const int mod=998244353;
int n;
string s;
int dp[N];
int pre[N];
void solve()
{
	cin>>n>>s;
    string ts=s;
    s=" "+s;
    int su=1;
    for(int i=1;i<=(n+1)/2;i++){
        su+=(s[i]-'A')*pre[((n+1)/2-i)]%mod;
        su%=mod;
    }
    int fl=0;
    string t;
    for(int i=1;i<=((n+1)/2);i++)t+=s[i];
    for(int i=(n+1)/2+1;i<=n;i++){
        t+=s[n-i+1];
    }
    //cout<<t<<endl;
    if(t>ts)fl=1;
    cout<<(su-fl+mod)%mod<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
    pre[0]=1;
    for(int i=1;i<N;i++)pre[i]=(pre[i-1]*26)%mod;
	while (__--)
		solve();
}
/*
4
ZABA


*/