/*
������ֱ��һ��������ȥ��������ʵ���Է��ֿ�����ǰ׺��ֱ�ӵó���
Ȼ����һ������ǰ��λ����
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
const int N=1e6+7;
string ss;
int s[N],t[N],su[N];
void solve()
{
	cin>>ss;
	int n=ss.size();
	for(int i=0;i<n;i++)t[i+1]=ss[i]-'0',su[i+1]=su[i]+t[i+1];
	for(int i=1;i<=n;i++){
		s[i]=su[i];
	}
	for(int i=n;i>=1;i--){
		if(s[i]>=10)s[i-1]+=s[i]/10;
		s[i]%=10;
	}
	int di=0;
	for(int i=0;i<=n;i++){
		if(s[i]){
			di=i;
			break;
		}
	}
	for(int i=di;i<=n;i++)printf("%d",s[i]);
}
signed main()
{
	solve();
}