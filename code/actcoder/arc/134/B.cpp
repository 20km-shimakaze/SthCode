#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int n;
string s;
vector<int>v[30];
void solve()
{
	cin>>n>>s;
    for(int i=0;i<s.size();i++){
        v[s[i]-'a'].push_back(i);//记录每一个字母的位置（内含从小到大
    }
    int di=0,l=0,r=n-1;
    for(int i=0;i<n;i++){//遍历匹配
        int u=-1;
        for(int j=0;j<s[i]-'a'&&u==-1;j++){//优先匹配更小的字符
            while(v[j].size()&&v[j].back()>r)v[j].pop_back();//能用来匹配的应该是比下标更小的
            if(v[j].size()&&v[j].back()>i)u=v[j].back(),v[j].pop_back();//若能匹配则匹配
        }
        if(u!=-1){
            r=u;
            swap(s[i],s[r]);
        }
    }
    cout<<s<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}
/*
cabaaabbbabcbaba
* *   *  *   * *
aaaaaaabbbbbbbcc
aaaaaaabbbbcbbbc
*/