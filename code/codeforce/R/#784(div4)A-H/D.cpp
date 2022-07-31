/*
观察可以发现，其实在两个W中只有单独的R或B才是不存在的，其他的都可以用不同盖章方式实现
判断即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
string s;
void solve()
{
	cin>>n;
    cin>>s;
    int r=0,b=0;
    int len=0;
    for(int i=0;i<n;i++){
        if(s[i]!='w'){
            len=i;break;
        }
    }
    int flag=0;
    //cout<<len<<endl;
    for(int i=len;i<n;i++){
        if(s[i]=='R')r++;
        if(s[i]=='B')b++;
        if(s[i]=='W'){
            if((r==0&&b!=0)||(r!=0&&b==0)){
                flag=1;
                break;
            }
            r=0;
            b=0;
        }
    }
    if((r==0&&b!=0)||(r!=0&&b==0))flag=1;
    //cout<<r<<" "<<b<<endl;
    if(!flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}