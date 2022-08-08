/*
当字符串长度为1时，只有. a 所以一定是1 2
当长度为2时，存在aa ab这样的，aa比ab多了a* a+
更多时，看是否是都是一个字符组成
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N = 600 + 10;
void solve()
{
    string s;
    cin>>s;
    int len=s.size();
    if(len==1){
        cout<<"1 2\n";
    }
    else if(len==2){
        if(s[0]==s[1]){
            cout<<"2 8\n";
        }
        else cout<<"2 6\n";
    }
    else{
        int fl=0;
        for(int i=1;i<len;i++){
            if(s[i]!=s[i-1])fl=1;
        }
        if(!fl)cout<<"2 4\n";
        else cout<<"2 2\n";
    }
}

signed main()
{
    int T;cin>>T;
    while (T--) solve();
	return 0;
}