#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string a,b,c;
int n,m,k;
void solve()
{
	cin>>n>>m>>k>>a>>b;
    c.clear();
    sort(a.begin(),a.end(),greater<char>());//1
    sort(b.begin(),b.end(),greater<char>());//0
    int fl,su=0;
    while(!a.empty()&&!b.empty()){
        // fl=a.back()<b.back();
        // printf("fl=%lld,su=%lld\n",fl,su);
        if(fl!=a.back()<b.back())su=0;
        if(su==k)fl^=1;
        else fl=a.back()<b.back();
        //printf("fl=%lld,su=%lld\n",fl,su);
        if(fl)c.push_back(a.back()),su++,a.pop_back();
        else c.push_back(b.back()),su++,b.pop_back();
    }
    cout<<c<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}