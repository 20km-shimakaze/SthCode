#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,m;
char s[1003][1003];
vector<int>a,b;
void solve()
{
	cin>>n>>m;
    a.clear();
    b.clear();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
            if(s[i][j]=='B'){
                a.push_back(i+j);
                b.push_back(i-j);
            }
        }
    }
    //cout<<"----"<<endl;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int anx=-1,any=-1,su=INT_MAX;
    //cout<<a[0]<<" "<<a.back()<<" "<<b[0]<<" "<<b.back()<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int t=0;
            t=max(t,i+j-a[0]);
            t=max(t,i-j-b[0]);
            t=max(t,b.back()-(i-j));
            t=max(t,a.back()-(i+j));
            if(t<su)su=t,anx=i,any=j;
        }
    }
    cout<<anx<<" "<<any<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}