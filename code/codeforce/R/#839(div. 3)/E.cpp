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
int p[N];
int a[N];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],p[i]=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=i)p[i]++;
		if(a[i]!=n-i+1)p[i]+=2;
	}
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=1;i<=n;i++){
		if(p[i]==1)cnt1++;
		else if(p[i]==2)cnt2++;
		else if(p[i]==3)cnt3++;
	}
	int fl=0;
	int tt=min(cnt1,cnt2);
	// if(tt)tt-=1;
	cnt1-=tt;
	cnt2-=tt;
	deque<int>q;
	for(int i=1;i<=cnt1;i++)q.push_back(1);
	for(int i=1;i<=cnt3;i++)q.push_back(3);
	for(int i=1;i<=cnt2;i++)q.push_back(2);

	while(q.size()){
		int x=q.front();
		q.pop_front();
		if(x==1)cnt1--;
		else if(x==3)cnt3--;
		if(cnt1==0&&cnt3==0&&cnt2!=0){
			cout<<"First"<<endl;
			return;
		}
		else if(!cnt1&&!cnt3&&!cnt2){
			cout<<"Tie"<<endl;
			return;
		}
		int y=q.back();
		q.pop_back();
		if(y==2)cnt2--;
		else if(y==3)cnt3--;
		if(cnt2==0&&cnt3==0&&cnt1!=0){
			cout<<"Second"<<endl;
			return;
		}
		else if(!cnt1&&!cnt3&&!cnt2){
			cout<<"Tie"<<endl;
			return;
		}
	}
	cout<<"First"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}