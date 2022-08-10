#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int n,l[N];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>l[i];
    sort(l+1,l+1+n);
    int an=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(l[i]==l[j]||l[j]==l[k]||l[i]==l[k])continue;
                if(l[i]+l[j]>l[k]&&l[j]-l[i]<l[k]){
                    an++;
                    //cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
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