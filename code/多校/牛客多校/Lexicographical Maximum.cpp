/*
https://ac.nowcoder.com/acm/contest/33186/G
��1-n���ֵ��������
�����ܷ�9�����ѡ���Է������һλ
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int n,v;
void solve()
{
	string s;
    cin>>s;
    string an;
    for(int i=0;i<s.size()-1;i++){
        an+='9';
    }
    an+=s.back();
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<an[i])flag=1;
    }
    if(flag)an.pop_back();
    cout<<an<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}