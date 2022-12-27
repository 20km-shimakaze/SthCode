#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,k;
int a[N],b[N];
 
void solve(){
	cin>>n;
	string s;
	cin>>s;
	s="!"+s;
	
	for(int i=1;i<=n;i++)a[i]=0;
	
	int c=0,d=0;
	for(int i=1;i<n;i++){
		if(s[i]=='1')a[i]=d,c=i;
		else b[i]=c,d=i;
	}
		
	for(int i=1;i<n;i++){
		if(s[i]=='1'){
			cout<<i+1-(i-a[i])<<' ';
		}
		else cout<<i+1-(i-b[i])<<' ';
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}