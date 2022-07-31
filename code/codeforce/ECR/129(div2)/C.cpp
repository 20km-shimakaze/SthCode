#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
struct poi
{
    int a,b;
}s[2000];
bool cmp(poi aa,poi bb)
{
    if(aa.a!=bb.a)return aa.a<bb.a;
    return aa.b<bb.b;
}
int a[1000],b[1000];
int n;
vector<poi>v;
void solve()
{
    //cout<<"****"<<endl;
	cin>>n;
    for(int i=1;i<=n;i++)cin>>s[i].a,a[i]=s[i].a;
    for(int i=1;i<=n;i++)cin>>s[i].b,b[i]=s[i].b;
    sort(s+1,s+1+n,cmp);
    for(int i=1;i<n;i++){
        if(s[i+1].b<s[i].b){
            puts("-1");
            return;
        }
    }
    int ans=0;
    v.clear();
    for(int i=1;i<=n;i++){
        if(s[i].a==a[i]&&s[i].b==b[i])continue;
        int dis=-1;
        for(int j=i+1;j<=n;j++){
            if(s[i].a==a[j]&&s[i].b==b[j]){
                dis=j;
                break;
            }
        }
        swap(a[i],a[dis]);
        swap(b[i],b[dis]);
        v.push_back({i,dis});
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].a<<" "<<v[i].b<<endl;
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