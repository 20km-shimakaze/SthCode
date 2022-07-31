/*
交替来一遍，直接check
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[100005];
int ans[100005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
    int fl=0;
    int l=1,r=(n+1)/2+1;
    int dis=1;
    for(int i=1;i<=n;i++){
        if(fl){
            ans[i]=a[r++];
        }
        else{
            ans[i]=a[l++];
        }
        fl^=1;
    }
    fl=0;
    for(int i=2;i<=n-1;i++){
        if((ans[i-1]<ans[i]&&ans[i]>ans[i+1])||(ans[i-1]>ans[i]&&ans[i]<ans[i+1]))continue;
        else {
            //cout<<"*"<<i<<endl;
            fl=1;
        }
    }
    //cout<<fl<<endl;
    if((ans[n]<ans[1]&&ans[1]>ans[2])||(ans[n]>ans[1]&&ans[1]<ans[2])){

    }
    else fl=1;
    if((ans[n-1]<ans[n]&&ans[n]>ans[1])||(ans[n-1]>ans[n]&&ans[n]<ans[1])){

    }
    else fl=1;
    if(fl)puts("NO");
    else{
        puts("YES");
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        puts("");
    }
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}