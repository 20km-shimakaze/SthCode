#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	string s;
	int k,n;
	cin>>n>>k>>s;
	int l=-1,r=-1;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			l=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			r=i;
			break;
		}
	}
	if(l==-1){
		int su=0;
		int fl=0;
		for(int i=0;i<n;i++){
			if(su>=k)fl++;
			if(s[i]=='0')su=0;
			if(s[i]=='?')su++;
		}
		if(su>=k)fl++;
		if(fl==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	else{
		int su=0;
		for(int i=l;i<=r;i++){
			if(s[i]=='0'){
				cout<<"No"<<endl;
				return;
			}
			su++;
		}
		int sul=0,sur=0;
		for(int i=l-1;i>=0;i--){
			if(s[i]=='0')break;
			sul++;
		}
		for(int i=r+1;i<n;i++){
			if(s[i]=='0')break;
			sur++;
		}
		if(su>k)cout<<"No"<<endl;
		else if(su==k)cout<<"Yes"<<endl;
		else if(sul==0){
			if(sur+su>=k)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else if(sur==0){
			if(sul+su>=k)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else if(sur+sul+su==k)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}