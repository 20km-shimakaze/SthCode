#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int w[200005];
struct poi{
    int id,x,dis;
}s[200005];
int vis[400009];
bool cmp(poi a,poi b)
{
    return a.x>b.x;
}
bool cmp1(poi a,poi b)
{
    return a.id<b.id;
}
void slove()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        s[i].id=i;
        cin>>s[i].x;
    }
    sort(s+1,s+1+n,cmp);
    int len=0;
    for(int i=1;i<=n+1;i++){
        if(i%2){
            len++;
            s[i].dis=len;
        }
        else{
            s[i].dis=-len;
        }
    }
    s[n+1].dis=0;
    s[n+1].id=0;
    sort(s+1,s+2+n,cmp1);
    int ans=0;
    for(int i=1;i<=n+1;i++){
        ans+=abs(s[i].dis)*s[i].x;
    }
    cout<<2*ans<<endl;
    for(int i=1;i<=n+1;i++){
        cout<<s[i].dis<<" ";
    }
    puts("");
}
signed main()
{
    int __;
    cin>>__;
    while(__--)slove();
}