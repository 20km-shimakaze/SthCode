#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
vector<int>v;
int n;
void solve()
{
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int ans=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==ans){
            ans++;
        }
        else break;
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}