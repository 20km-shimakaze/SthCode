/*
�۲���Է��֣��������ʵ�֣��Һ��������С�������֣���ô���ǿ���ʵ�ֽ����໥�����ִ�С
�Ӷ�ʵ��1~m��ɫ���֣�m+1~n��ɫ���ֵ������ģ���жϼ���
*/
#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],r[200005];
int n,sur,sub;
string s;
bool cmp(int a,int b)
{
    return a>b;
}
void slove()
{
    cin>>n;
    sur=sub=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>s;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='R')r[++sur]=a[i];
        else b[++sub]=a[i];
    }
    sort(r+1,r+1+sur);
    sort(b+1,b+1+sub);
    int flag=0;
    for(int i=1;i<=sub;i++){
        if(b[i]<i){
            flag=1;
            // cout<<"b"<<endl;
            break;
        }
    }
    for(int i=sur;i>=1;i--){
        if(r[i]>i+sub){
            flag=1;
            // cout<<"a"<<endl;
            // cout<<r[i]<<" "<<i<<endl;
            break;
        }
    }
    if(flag)puts("NO");
    else puts("YES");
}
int main()
{
    int __;
    cin >> __;
    while (__--){
        slove();
    }
}