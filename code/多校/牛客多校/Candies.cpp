/*
ֱ����˫������жϣ���������ƥ�䣩����������ǻ�����Ҫ�Զ��������ж�
*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
using pii=pair<int,int>;
const int INF=0x3f3f3f3f;
const int maxn=1e6;
int p[maxn];
int n,x;
void solve()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	deque<int>q;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(q.empty())q.push_back(p[i]);
		else{
			if(p[i]+q.back()==x||p[i]==q.back())q.pop_back(),cnt++;
			else q.push_back(p[i]);
		}
	}
	while(1){
		if(q.size()<=1)break;
		if(q.front()==q.back()||q.front()+q.back()==x)q.pop_back(),q.pop_front(),cnt++;
		else break;
	}
	cout<<cnt<<endl;
}
signed main()
{
        solve();
    return 0;
}