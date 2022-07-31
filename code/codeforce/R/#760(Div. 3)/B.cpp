#include<bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    int n;
    cin>>n;
    int sum=0;
    string s,s1;
    cin>>s;
    for(int i=2;i<=n-2;i++){
        cin>>s1;
        if(s1[0]==s[s.size()-1]){
            s+=s1[1];
        }
        else{
            sum++;
            s+=s1;
        }
    }
    if(!sum){
        s+='a';
    }
    cout<<s<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}