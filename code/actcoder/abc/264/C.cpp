#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int h1,h2,w1,w2;
int s[12][12],t[12][12];
int check(int a)
{
    int sum=0;
    while(a){
        if(a&1)sum++;
        a>>=1;
    }
    return sum;
}
int check1(int a,int b)
{
    int h=0,w=0;
    for(int i=0;i<h1;i++){
        if((a&(1<<i))==0){
            continue;
        }
        for(int j=0;j<w1;j++){
            if((b&(1<<j))==0){
                continue;
            }
            if(t[h][w]!=s[i][j])return 0;
            w++;
        }
        w=0;
        h++;
    }
    return 1;
}
void solve()
{
	cin>>h1>>w1;
    for(int i=0;i<h1;i++){
        for(int j=0;j<w1;j++){
            cin>>s[i][j];
        }
    }
    cin>>h2>>w2;
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++){
            cin>>t[i][j];
        }
    }
    int fl=0;
    for(int i=0;i<(1<<h1);i++){
        if(check(i)!=h2)continue;
        for(int j=0;j<(1<<w1);j++){
            if(check(j)!=w2)continue;
            // cout<<i<<" "<<j<<endl;
            // cout<<check(i)<<"&"<<check(j)<<endl;
            if(check1(i,j))fl=1;
        }
    }
    if(fl)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}