#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct poi
{
	int id,num,ans;
}s[N];
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].num;
		s[i].id=i;
	}
	sort(s+1,s+1+n,[&](poi a,poi b){
		return a.num>b.num;
	});
	int a=s[1].num,b=s[2].num;
	for(int i=1;i<=n;i++){
		if(s[i].num!=a)s[i].ans=s[i].num-a;
		else s[i].ans=s[i].num-b;
	}
	sort(s+1,s+1+n,[&](poi a,poi b){
		return a.id<b.id;
	});
	for(int i=1;i<=n;i++){
		cout<<s[i].ans<<" ";
	}cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}