#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,k;
string s;
void solve()
{
	cin>>n>>k>>s;
    int ans=INT_MAX;
    int ti=0,sum=0;
    int l=-1,r=-1;
    while(r<n){
        //cout<<l<<" "<<r<<" "<<sum<<" "<<ti<<endl;
        if(sum<k){
            r++;
            if(s[r]=='B')sum++;
            else if(s[r]=='W'){
                sum++,ti++;
                //cout<<"----"<<r<<" "<<ti<<endl;
            }
            if(sum==k)ans=min(ans,ti);
            continue;
        }
        ans=min(ans,ti);
        if(sum>=k){
            l++;
            if(s[l]=='B')sum--;
            else if(s[l]=='W')sum--,ti--;
        }
        //if(sum==k)ans=min(ans,ti);
    }
    //ans=min(ans,ti);
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}