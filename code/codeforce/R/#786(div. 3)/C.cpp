/*
���ڴ���۲���Է��֣���s�����������Ϊ1��ΪaӦ����ֻ����һ�����
Ȼ��s���ȴ���1�Ҵ���a��ô�����޶��
�����ܹ����ɵ�������2^m�η���(a�ĸ���)
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