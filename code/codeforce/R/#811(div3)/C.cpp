/*
���Ծ����ܷ�������
����ֱ�Ӵ�9��ʼƥ�伴��
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n;
stack<int>st;
void solve()
{
	cin>>n;
    for(int i=9;i>=1;i--){
        if(n>=i)st.push(i),n-=i;
    }
    while(st.size())cout<<st.top(),st.pop();
    puts("");
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}