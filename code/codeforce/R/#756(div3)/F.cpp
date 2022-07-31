#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
void slove()
{
    deque<int>q;
    ll n,mon,l,r;
    cin>>n>>mon;
    ll al=0,ar=0;
    l=1,r=1;
    ll maxx=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(r<=n){
        mon+=a[r];
        r++;
        if(mon>=0){
            if(r-l>=maxx){
                ar=r-1;
                al=l;
                maxx=r-l;
            }
        }
        else{
            while(mon<0&&l<r){
                mon-=a[l];
                l++;
            }
        }
    }
    if(maxx==-1){
        cout<<-1<<endl;
    }
    else cout<<al<<" "<<ar<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}