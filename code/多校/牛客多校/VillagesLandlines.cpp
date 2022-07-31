/*
https://ac.nowcoder.com/acm/contest/33186/A
���Խ���Ŀת��Ϊ���������⣬��Ҫ������������һƬҪ�����ֶ�������
ֱ�����򣬱���һ��ÿһ�����ж��ٿ�ȱ����
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
struct poi
{
    int l,r;
}s[200005];
bool cmp(poi a,poi b)
{
    if(a.l!=b.l)return a.l<b.l;
    return a.r>b.r;
}
void solve()
{
	int n;
    int x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        s[i].l=x-y;
        s[i].r=x+y;
    }
    sort(s+1,s+1+n,cmp);
    int ans=0;
    int l=s[1].l,r=s[1].r;
    for(int i=2;i<=n;i++){
        if(r>=s[i].r)continue;
        if(s[i].l<=r){
            r=s[i].r;
            continue;
        }
        else{
            ans+=s[i].l-r;
            r=s[i].r;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}