/*
���Է��֣�ֻ�е��ַ�����ѭ�����ֵ�ʱ�򣬲��������ַ�����
��Ϊֻ�������Ӳ���ʹ��ÿ���ַ����ֵ����λ����ȣ�ÿ�������г��ֵ��ַ�
���ĺ����ٵĲ��С�ڵ���1
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
struct poi
{
    char c;
    int dis;
}a[200005];
bool cmp(poi a,poi b)
{
    if(a.c!=b.c)return a.c<b.c;
    else return a.dis<b.dis;
}
void solve()
{
	string s;
    cin>>s;
    for(int i=1;i<=s.size();i++){
        a[i].c=s[i-1];
        a[i].dis=i;
    }
    sort(a+1,a+1+s.size(),cmp);
    int m=1e9;
    for(int i=1;i<=s.size()-1;i++){
        if(a[i].c==a[i+1].c){
            m=min(m,a[i+1].dis-a[i].dis);
        }
    }
    //cout<<m<<endl;
    int n=s.size();
    if(m!=1e9){
        for(int i=m;i<n;i++){
            if(s[i]!=s[i-m]){
                puts("NO");
                return;
            }
        }
    }
    puts("YES");



    // for(int i=1;i<=s.size();i++){
    //     cout<<a[i].c<<" "<<a[i].dis<<endl;
    // }
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}