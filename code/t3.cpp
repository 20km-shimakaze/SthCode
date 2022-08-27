#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+200;
const int mod=998244353;
const int maxn=280000;
int n,q;
int a[maxn],an[maxn];
int pri[maxn];
vector<int>pr;
void get_pri()
{
    pri[0]=pri[1]=1;
    for(int i=2;i<maxn;i++){
        if(pri[i])continue;
        for(int j=i+i;j<maxn;j+=i){
            pri[j]=1;
        }
    }
}
int vis[N];
void solve()
{
	cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    get_pri();
    int nn=2;
    for(int i=1;i<=n;i++){
        for(int j=nn;j<maxn;j++){
            if((!pri[j])&&(!vis[j])){
                an[i]=j;
                nn=j;
                break;                
            }
        }
        vis[a[i]]=1;
    }
    for(int i=1;i<=q;i++){
        int qq;
        cin>>qq;
        cout<<an[qq]<<endl;
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}