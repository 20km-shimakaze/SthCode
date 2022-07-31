/*
对于此题观察可以发现，当s里面如果长度为1且为a应该是只能有一种情况
然后当s长度大于1且存在a那么则无限多个
否则能够生成的数量是2^m次方个(a的个数)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string a,s;
    cin>>a>>s;
    int ans=0;
    if(s=="a"){
        cout<<1<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            cout<<-1<<endl;
            return;
        }
    }
    int sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='a')sum++;
    }
    //cout<<sum<<endl;
    cout<<((long long)1<<sum)<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}