/*
ֱ��̰�ģ����a����b������ֱ�Ӳ����ܹ���ɹ�
������� b/a*a����ʽ
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int a,b;
    cin>>a>>b;
    if(b%a){
        cout<<"0 0"<<endl;
        return;
    }
    cout<<1<<" "<<b/a<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}