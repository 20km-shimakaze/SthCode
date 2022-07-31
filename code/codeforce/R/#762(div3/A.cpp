#include<bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    string s;
    cin>>s;
    string ans="YES";
    if(s.size()%2!=0)ans="NO";
    else{
        int mid=s.size()/2;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[i+mid])ans="NO";
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}