#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
string s,t;
int an[N];
void solve()
{
	cin>>n>>s>>t;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(s[i]!=t[i]){
			if(s[i]=='1')a++;
			else b++;
		}
		else an[i]=-1;
	}
	if((a+b)%2){
		cout<<-1<<endl;
		return;
	}
	// for(int i=0;i<n;i++){
	// 	if(an[i]==-1)continue;
	// 	if(s[i]=='1'){
	// 		an[i]=1;
	// 	}
	// 	else an[i]=0;
	// }
	if(a>b){
		int tt=a-b,num=0;
		tt/=2;
		for(int i=n-1;i>=0;i--){
			if(an[i]==-1)continue;
			if(s[i]=='1'&&num<tt){
				an[i]=1;
				num++;
			}
			else an[i]=0;
		}
	}
	else {
		int tt=b-a,num=0;
		tt/=2;
		for(int i=n-1;i>=0;i--){
			if(an[i]==-1)continue;
			if(s[i]=='0'&&num<tt){
				an[i]=1;
				num++;
			}
			else an[i]=0;
		}
	}
	int fl=an[0];
	for(int i=0;i<n;i++){
		if(an[i]==-1)cout<<0;
		else cout<<an[i];
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