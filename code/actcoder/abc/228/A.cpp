#include<iostream>
using namespace std;
int main()
{
    int s,t,x;
    cin>>s>>t>>x;
    if(s<t){
        if(x>=s&&x<t)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else{
        if(x>=s){
            cout<<"Yes"<<endl;
        }
        else{
            if(x<t)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}