#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
struct poi
{
    int l,r,c;
    bool friend operator <(poi a,poi b){
        return a.c>b.c;
    }
};
void slove()
{
    int l,r,c,n,minl=1e9+1,maxr=-1,a1,a2;
    priority_queue<poi>qa;
    priority_queue<poi>qi;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>l>>r>>c;
        int flag=0;
        if(l==minl){
            qi.push({l,r,c});
        }
        if(r==maxr){
            qa.push({l,r,c});
        }
        if(l<minl){
            while(!qi.empty())qi.pop();
            qi.push({l,r,c});
            minl=l;
            flag=1;
        }
        if(r>maxr){
            while(!qa.empty())qa.pop();
            qa.push({l,r,c});
            maxr=r;
        }
        poi a,b;
        a=qi.top();
        b=qa.top();
        if(a.l==b.l){
            cout<<b.c<<endl;
            continue;
        }
        if(a.r==b.r){
            cout<<a.c<<endl;
            continue;
        }
        cout<<a.c+b.c<<endl;
    }
}
int main()
{
    int __;cin>>__;
    while(__--)slove();
}