#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6;
const int mod=LLONG_MAX;
int head[N],cnt,low[N],dfn[N],w[N],idx,num,n,m,col[N],tot,tt;
struct Edge
{
    int to,next;
}e[N];
vector<int>v[N];
bitset<N>vi;
stack<int>st;
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
void tarjan(int x,int fa)
{
    dfn[x]=low[x]=++idx;
    st.push(x);
    int son=0;
    for(int i=head[x];i;i=e[i].next){
        int y=e[i].to;
        if(!dfn[y]){
            tarjan(y,fa);
            low[x]=min(low[x],low[y]);
            if(low[y]>=dfn[x]){
                son++;
                // col[x]=++num;
                if(x!=fa||son>1)vi[x]=1;
                num++;
                int z;
                do{
                    z=st.top();
                    st.pop();
                    v[num].push_back(z);
                    // col[z]=num;
                }while(z!=y);
                v[num].push_back(x);
            }
        }
        else low[x]=min(low[x],dfn[y]);
    }
    if(x==fa&&!head[x])v[++num].push_back(x);
}
void solve()
{
	while(cin>>m,m){
        tt++;
        for(int i=1;i<=m;i++){
            int s,t;
            cin>>s>>t;
            n=max({s,t,n});
            add(s,t);
            add(t,s);
        }
        for(int i=1;i<=n;i++){
            if(!dfn[i])tarjan(i,i);
        }
        // cout<<num<<endl;
        // for(int i=1;i<=num;i++){
        //     for(int j:v[i])cout<<j<<" ";puts("");
        // }
        // for(int i=1;i<=n;i++)cout<<col[i]<<" ";puts("");
        // for(int i=1;i<=n;i++)cout<<vi[i]<<" ";puts("");
        map<P,int>mp;
        for(int x=1;x<=num;x++){
            for(int i=head[x];i;i=e[i].next){
                int y=e[i].to;
                int cx=col[x],cy=col[y];
                if(cx!=cy&&!mp[{cx,cy}])v[cx].push_back(cy),mp[{cx,cy}]=1;
            }
        }
        // for(int i=1;i<=n;i++){
        //     cout<<col[i]<<" ";
        // }puts("");
        int an1=0,an2=1;
        for(int i=1;i<=num;i++){
            int cn=0;
            int nu=v[i].size();
            for(int di:v[i])if(vi[di])cn++;
            if(cn==0)an2*=(nu-1)*nu/2,an1+=2;
            else if(cn==1)an2*=nu-1,an1+=1;
        }
        cout<<"Case "<<tt<<": "<<an1<<" "<<an2<<endl;
        for(int i=1;i<=n;i++)head[i]=0,v[i].clear(),col[i]=0,low[i]=0,dfn[i]=0;
        cnt=0,idx=0,num=0,n=0;
        vi.reset();
        while(st.size())st.pop();
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