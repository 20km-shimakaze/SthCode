#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
string s,t;
vector<int>v;
void solve()
{
    int n;
    cin>>n;
    cin>>s;
    string an=s;
    int l,r=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=l;i--){
        t=s;
        for(int j=l;j<=i;j++){
            if(t[j]=='d')t[j]='p';
            else t[j]='d';
        }
        reverse(t.begin()+l,t.begin()+i+1);
        if(t<an){
            an=t;
        }
    }
    cout<<an<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}