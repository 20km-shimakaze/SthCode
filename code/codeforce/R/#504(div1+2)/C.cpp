#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,k;
string s;
int vis[200005];
void solve()
{
    cin>>n>>k>>s;
    int su=0;
    stack<char>st;
    for(int i=0;i<n;i++){
        if(su<n-k){
            if(st.size()&&st.top()=='('&&s[i]==')'){
                st.pop();
                su+=2;
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    stack<char>ans;
    while(st.size())ans.push(st.top()),st.pop();
    while(ans.size())cout<<ans.top(),ans.pop();
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}