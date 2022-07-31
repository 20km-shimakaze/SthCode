#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string s;
    cin>>s;
    int flag=0,a=0,b=0;
    char c='c';
    for(int i=0;i<s.size();i++){
        if(c!=s[i]){
            if(a==1||b==1){
                flag=1;
            }
            c=s[i];
            a=0,b=0;
        }
        if(s[i]=='a')a++;
        else b++;
    }
    if(a==1||b==1){
                flag=1;
            }
    if(!flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}