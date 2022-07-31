#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
const int maxn=1e6+7;
/*
周期定理：若p,q为s的周期，则gcd(p,q)也是s周期
一个串border数量是on个但他们组成了logn个等差数列
*/
struct KMP
{
    int nex[maxn];
    int len=0;
    void getNext1(string ss)
    {
        ss=" "+ss;
        len=ss.size();
        for(int i=2;i<len;i++){
            nex[i]=nex[i-1];//继承前一个border
            while(nex[i]&&ss[i]!=ss[nex[i]+1])nex[i]=nex[nex[i]];//跳转
            nex[i]+=(ss[i]==ss[nex[i]+1]);//修正while退出的原因
        }
    }
    void getNext(string ss)
    {
        len=ss.size();
        int l=-1,r=0;
        nex[0]=-1;
        while(r<len){
            if(l==-1||ss[l]==ss[r]){
                nex[++r]=++l;
            }
            else l=nex[l];
        }
    }
    void find(string s,string t)
    {
        int lens=s.size(),lent=t.size();
        int ps=0,pt=0;
        while(ps<lens){
            if(pt==-1||s[ps]==t[pt]){
                ps++,pt++;
                if(pt==lent){
                    //cout<<ps-lent+1<<endl;
                    pt=nex[pt];
                }
            }
            else pt=nex[pt];
        }
    }
    vector<int> getXun()
    {
        vector<int>v;
        int now=len;
        while(now){
            now=nex[now];
            v.push_back(len-now);
        }
        return v;
    }
    vector<int> getZhouqi()
    {
        vector<int>v;
        for(auto i:getXun()){
            if(len%i)v.push_back(i);
        }
        return v;
    }
}kmp;


void solve()
{
    
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}