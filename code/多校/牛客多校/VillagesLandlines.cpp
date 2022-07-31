/*
https://ac.nowcoder.com/acm/contest/33186/A
可以将题目转化为：种数问题，问要把所有树连成一片要额外种多少树。
直接排序，遍历一遍每一块中有多少空缺即可
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