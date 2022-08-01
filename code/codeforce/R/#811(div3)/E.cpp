/*
找规律，可以发现1->2->4->8  3->6->2  5->0  9->8
对于5和0来说，0无法移动，5直接+5，也无法移动，直接特判即可
对于剩下的，可以发现，20是一个循环节
直接一个个暴力跑，看是否能变成%20一样的数字即可
选定一个终止点，每个数看到相同终止点要多少步
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,a[200005];
vector<int>an;
int f(int x,int st)
{
    while(st){
        x+=x%10;
        st--;
    }
    return x;
}
void solve()
{
	cin>>n;
    an.clear();
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        int t=a[i]%10;
        if(t==0){
            an.push_back(a[i]);
        }
        else if(t==1){
            a[i]=f(a[i],3);
        }
        else if(t==2){
            a[i]=f(a[i],2);
        }
        else if(t==3){
            a[i]=f(a[i],4);
        }
        else if(t==4){
            a[i]=f(a[i],1);
        }
        else if(t==5){
            a[i]+=5;
            an.push_back(a[i]);
        }
        else if(t==6){
            a[i]=f(a[i],3);
        }
        else if(t==7){
            a[i]=f(a[i],2);
        }
        else if(t==8){
            
        }
        else if(t==9){
            a[i]=f(a[i],1);
        }
    }
    if(an.size()!=0&&an.size()!=n){
        puts("NO");
        return;
    }
    else if(an.size()==n){
        for(int i=0;i<an.size()-1;i++){
            if(an[i]!=an[i+1]){
                puts("NO");
                return;
            }
        }
        puts("YES");
        return;
    }
    for(int i=1;i<=n;i++)a[i]%=20;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i+1]){
            puts("NO");
            return;
        }
    }
    puts("YES");
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}