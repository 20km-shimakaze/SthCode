/*
�۲���Է�����ʵ����ż���������У����������򷽷�ֻ�����a[i]��a[i+1](iΪ����)
����ֻ��Ҫ̰�ĳ��Խ���a[i]��a[i+1]��֮���ٱ������ǲ����Ѿ��������
����ż�����ȣ��׵����е�һλ��ʵ���޷������ģ����Խ����ӵڶ�λ��ʼ
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,a[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n%2){
        for(int i=2;i<=n;i+=2){
            if(a[i]>a[i+1])swap(a[i],a[i+1]);
        }
    }
    else{
        for(int i=1;i<=n;i+=2){
            if(a[i]>a[i+1])swap(a[i],a[i+1]);
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            puts("NO");
            return;
        }
    }
    puts("YES");
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}