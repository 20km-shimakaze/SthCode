#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
int n,a[N];
int num[N];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],num[a[i]]++;
    int t1=a[1];
    for(int i=2;i<=n;i++)t1=__gcd(t1,a[i]);
    if(t1!=1){
        cout<<"not coprime"<<endl;
        return;
    }
    for(int i=2;i<=N;i++){
        int cnt=0;
        for(int j=i;j<N;j+=i){//找到以i为倍数的数量，若大于1，则说明有多个，不能存在配对的
            cnt+=num[j];
        }
        if(cnt>1){
            cout<<"setwise coprime"<<endl;
            return;
        }
    }
    cout<<"pairwise coprime"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}