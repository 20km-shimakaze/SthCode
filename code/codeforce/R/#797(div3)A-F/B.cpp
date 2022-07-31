#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[200005],b[200005];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    int maxx=-1;
    int t=-1000000000;
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            maxx=max(maxx,a[i]);
        }
        else{
            if(t==-1000000000){
                t=a[i]-b[i];
                if(a[i]-b[i]<0){
                    puts("NO");
                    return;
                }
                continue;
            }
            if(t<0||a[i]-b[i]!=t){
                //cout<<i<<endl;
                puts("NO");
                return;
            }
        }
    }
    if(maxx>t&&t!=-1000000000)puts("NO");
    else puts("YES");
}
int main()
{
    int __;cin>>__;
    while(__--)solve();
}