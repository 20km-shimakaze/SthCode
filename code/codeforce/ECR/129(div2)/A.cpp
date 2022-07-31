#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,m;
int a[100],b[100];
void solve()
{
	cin>>n;
    int ma=-1;
    int mb=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        mb=max(mb,b[i]);
    }
    if(ma<mb)cout<<"Bob\nBob"<<endl;
	else if(ma>mb)cout<<"Alice\nAlice"<<endl;
	else cout<<"Alice\nBob"<<endl;

}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}