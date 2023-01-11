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
int n;
int a[N];
int p[N],q[N];
void solve()
{
	cin>>n;
	map<int,int>mp,visp,visq;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[i]=q[i]=0;
	}
	for(int i=1;i<=n;i++){
		if(mp[a[i]]>=2){
			cout<<"NO"<<endl;
			return;
		}
		if(mp[a[i]]==1){
			q[i]=a[i];
			visq[a[i]]=i;
		}
		else p[i]=a[i],visp[a[i]]=i;
		mp[a[i]]++;
	}
	mp.clear();
	priority_queue<int>qu;
	for(int i=1;i<=n;i++){
		if(q[i]==0){
			qu.push(p[i]);
		}
	}
	int num=n;
	while(qu.size()){
		int nu=qu.top();
		qu.pop();
		while(visq.count(num)||num>nu)num--;
		if(num==0){
			cout<<"NO"<<endl;
			return;
		}
		q[visp[nu]]=num;
		visq[num]=visp[nu];
	}

	for(int i=1;i<=n;i++){
		if(p[i]==0){
			qu.push(q[i]);
		}
	}
	num=n;
	while(qu.size()){
		int nu=qu.top();
		qu.pop();
		while(visp.count(num)||num>nu)num--;
		if(num==0){
			cout<<"NO"<<endl;
			return;
		}
		p[visq[nu]]=num;
		visp[num]=visq[nu];
	}
	cout<<"YES"<<endl;
	for(int i=1;i<=n;i++)cout<<p[i]<<" ";cout<<endl;
	for(int i=1;i<=n;i++)cout<<q[i]<<" ";cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}