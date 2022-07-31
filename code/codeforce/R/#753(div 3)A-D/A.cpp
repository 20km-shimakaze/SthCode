#include<bits/stdc++.h>
using namespace std;
void slove()
{
    string a,s;
    cin>>s>>a;
    int len=0;
    int dis;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[0]){
            dis=i;
            break;
        }
    }
    for(int i=1;i<a.length();i++){
        for(int j=0;j<s.length();j++){
            if(s[j]==a[i]){
                len+=abs(dis-j);
                dis=j;
                break;
            }
        }
    }
    cout<<len<<endl;
}
int main()
{
    int __;cin>>__;
    while(__--)slove();
}
