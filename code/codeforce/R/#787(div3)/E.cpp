/*
̰��ʹ�ò��鼯�Ż�
��ǰ�������Ż������Ȱ����л����ǰ��ĸ���С��
�������ͨ��ǰ���С��·���Ż���ǰ����ֹ���״̬�����濴�ɲ�����һ��䣩
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int fa[100];
int getF(int x)
{
    return x==fa[x]?x:fa[x]=getF(fa[x]);
}
void solve()
{
	int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<=25;i++){
        fa[i]=i;
    }
    k=min(k,(ll)25);
    for(int i=0;i<s.size();i++){
        s[i]=getF(s[i]-'a')+'a';
        while(k&&s[i]!='a'){//��û�л�����߲��ü�С
            k--;
            int x=s[i]-'a';
            if(fa[x]==x)fa[x]=x-1;
            s[i]--;
            s[i]=getF(s[i]-'a')+'a';//���£���s[i]����֮��Ҳ���и���
        }
    }
    cout<<s<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}