#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
vector<string>v,an;
int n;
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),[&](string a,string b){
        if(a.size()!=b.size())return a.size()>b.size();
        return a>b;
    });
    for(int i=0;i<3;i++)an.push_back(v[i]);
    sort(an.begin(),an.end(),[&](string a,string b){
        return a>b;
    });
    for(auto i:an)cout<<i;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}