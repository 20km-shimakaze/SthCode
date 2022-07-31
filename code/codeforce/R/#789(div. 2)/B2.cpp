#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n;
    int ans=0,l=-1,x=0,y=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i+=2){
        if(s[i]!=s[i+1])x++;
        else{
            if(l!=s[i])y+=1;
            l=s[i];
        }
    }
    cout<<x<<" "<<max((int)1,y)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}
/*
5
10
1110011000
8
11001111
2
00
2
11
6
100110
*/