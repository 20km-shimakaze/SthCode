#include<iostream>
#include<algorithm>
using namespace std;
int a1,a2,a3,n,k,s[100005],s1[100005];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a1>>a2>>a3;
        s[i]=a1+a2+a3;
        s1[i]=s[i];
    }
    sort(s+1,s+1+n,cmp);
    int mm=s[k];
    //cout<<mm<<endl;
    for(int i=1;i<=n;i++){
        if(s1[i]+300>=mm)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        //cout<<s1[i]<<endl;
    }
}