/*
����̰�ģ����ҽ����ַ�������Ϊ1ʱ��Bob�ſ���Ӯ
���ַ���Ϊż��ʱ��Aliceѡ������е�ȫ��ɾ��
��Ϊ����ʱ��ѡ��Ҫ��һ�������һ����С����һ����������ɾ��
�������ֶ���Aliceһ��ʤ���ķ���
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string s;
    cin>>s;
    if(s.size()==1){
        cout<<"Bob "<<s[0]-'a'+1<<endl;
        return;
    }
    if(s.size()%2==0){
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=s[i]-'a'+1;
        }
        cout<<"Alice "<<ans<<endl;
        return;
    }
    int ans=0;
    for(int i=1;i<s.size()-1;i++){
        ans+=s[i]-'a'+1;
    }
    if(s[0]>s[s.size()-1])ans+=s[0]-s[s.size()-1];
    else ans+=s[s.size()-1]-s[0];
    cout<<"Alice "<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}