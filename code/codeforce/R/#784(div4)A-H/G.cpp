/*
����= =��ÿ������o��ʱ������ͳ��*����������Ϊ.��ֱ�������߽����������o
Ȼ���ٴ�ԭ��o��λ����������o��ע�����һ�б߽�ҲҪͳ��
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,m;
char mp[52][52];
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        getchar();
        for(int j=1;j<=m;j++){
            mp[i][j]=getchar();
        }
    }
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=m;j++){
            if(mp[i][j]=='o'||i==n+1){
                int tsum=0;
                for(int k=i-1;k>=1&&mp[k][j]!='o';k--){
                    if(mp[k][j]=='*'){
                        mp[k][j]='.';
                        tsum++;
                    }
                }
                for(int k=i-1;k>=1&&tsum!=0;k--){
                    mp[k][j]='*';
                    tsum--;
                }
            }
        }
    }




    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<mp[i][j];
        }
        cout<<endl;
    }
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}