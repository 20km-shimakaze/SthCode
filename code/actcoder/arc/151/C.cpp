/*
博弈
归纳法，先开始处理单个情况，0 1是相对的
0....1：必败 
0....0：必胜 策略：在0边上放1
......：n%2=1必胜 策略：先手在中间放1 其他的模仿后手对称放
0.....：必胜
组合情况：
由于0...1是必败，所以其实两人在这个区间里面操作都是一对对的，所以对结果胜负无影响
由于0...0是必胜，所以在这个区间内操作是使得胜负手交换的，所以对ans^1
两端的...0当且仅当.个数一样才是必败的所以对a	ns^tn（一段的.个数）
文后附加sg打表验证
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
int fl;
void solve()
{
	cin>>n>>m;
	if(!m){
		cout<<(n%2?"Takahashi":"Aoki")<<endl;
		return;
	}
	vector<P>v(m+1);
	for(int i=1;i<=m;i++){
		cin>>v[i].first>>v[i].second;
	}
	int an1=0;
	an1^=(v[1].first-1);
	an1^=(n-v.back().first);
	for(int i=2;i<=m;i++){
		if(v[i].second==v[i-1].second)an1^=1;
	}
	cout<<an1<<endl;
	cout<<(an1?"Takahashi":"Aoki")<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
map<string,int>sg;
int dfs(string s)
{
    if(sg.count(s))return sg[s];
    // cout<<s<<endl;
    bitset<100>vis;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'||s[i]=='0')continue;
        if((i==0||s[i-1]!='1')&&(i==s.size()-1||s[i+1]!='1')){
            char c=s[i];
            s[i]='1';
            vis[dfs(s)]=1;
            s[i]=c;
        }
        if((i==0||s[i-1]!='0')&&(i==s.size()-1||s[i+1]!='0')){
            char c=s[i];
            s[i]='0';
            vis[dfs(s)]=1;
            s[i]=c;
        }
    }
    int mex=0;
    while(vis[mex])mex++;
    // cout<<s<<" "<<mex<<endl;
    return sg[s]=mex;
}
void solve()
{
    string s;
    cin>>s;
    cout<<dfs(s)<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}
*/