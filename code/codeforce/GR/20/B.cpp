#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[100];
string s;
void solve()
{
	cin>>s;
    int a=0,b=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='A')a++;
        else b++;
        if(b>a){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(b==0||s[s.size()-1]!='B'){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}