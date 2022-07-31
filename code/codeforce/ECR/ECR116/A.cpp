#include<bits/stdc++.h>
using namespace std;
int check(string s,int m)
{
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='a'&&s[i+1]=='b')a++;
        if(s[i]=='b'&&s[i+1]=='a')b++;
    }
    if(m==1)return a;
    if(m==2)return b;
}
void slove()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<s.length()-1;i++){
        n-=(s[i]==s[i+1]);
    }
    if(n%2==0)s[0]=s[s.length()-1];
    cout<<s<<endl;
}
int main()
{
    int __;cin>>__;
    while(__--)slove();
}