#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
vector<int>v;
int a[200005];
int n;
void solve()
{
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n);
    int su=0,ti=a[1];
    for(int i=1;i<n;i++){
        if(ti==a[i]){
            su++;
        }
        else{
            v.push_back(su);
            //cout<<"--"<<su<<" "<<a[i]<<" "<<i<<endl;
            su=1;
            ti=a[i];
        }
    }
    v.push_back(su);
    sort(v.begin(),v.end(),greater<int>());
    int ans=0,res=v.size()+1;
    priority_queue<int>q;
    for(int i=0;i<v.size();i++){
        if(v[i]-res+i>0){
            q.push(v[i]-res+i);
        }
    }
    while(q.size()){
        int t1=q.top();
        q.pop();
        int t2=0;
        if(q.size())t2=q.top();
        if(t2==0){
            if(ans<t1){
                ans+=(t1-1-ans)/2+1;
                break;
            }
        }
        else if(ans<t1){
            int c1=t1-t2+1;
            int c2=(t1-1-ans)/2+1;
            int tot=min(c1,c2);
            ans+=tot;
            t1-=tot;
            if(t1>0)q.push(t1);
        }
    }
    cout<<res+ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}