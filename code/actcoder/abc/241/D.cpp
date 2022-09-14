#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
multiset<int>se;
int op,x,k,q;
void solve()
{
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x;
            se.insert(x);
        }
        else if(op==2){
            cin>>x>>k;
            int fl=0;
            auto it=se.upper_bound(x);
            for(int i=1;i<=k;i++){
                if(it==se.begin()){
                    cout<<-1<<endl;
                    fl=1;
                    break;
                }
                it--;
            }
            if(!fl)cout<<*it<<endl;
        }
        else {
            cin>>x>>k;
            int fl=0;
            auto it=se.lower_bound(x);
            for(int i=1;i<k;i++){
                if(it==se.end()){
                    fl=1;
                    break;
                }
                it++;
            }
            if(it==se.end())cout<<-1<<endl;
            else if(!fl)cout<<*it<<endl;
        }
    }
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}