#include<bits/stdc++.h>
using namespace std;
void slove()
{
    int n,k;
    cin>>n>>k;
    int m=n/2;
    if(n&1)m++;
    if(k>m){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j&&i&1&&k>0){
                cout<<'R';
                k--;
            }
            else cout<<'.';
        }
        puts("");
    }
}
int main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)slove();
}