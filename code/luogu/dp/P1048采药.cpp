#include<bits/stdc++.h>
using namespace std;
int t,m;
struct poi
{
    int t,m;
}a[105];
int dp[105][1050];//dp[i][j]:在j容量内放i个物品的最大值
int main()
{
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i].t>>a[i].m;
    }
    for(int i=1;i<=m;i++){//遍历每个物品
        for(int j=t;j>=1;j--){//尝试放物品i放入j容量中
            if(j>=a[i].t){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i].t]+a[i].m);//选择是否放物品
            }
            else{
                dp[i][j]=dp[i-1][j];//不可放，最大容量为比自己容量小1的放i物品值
            }
        }
    }
    cout<<dp[m][t]<<endl;
}

/*
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
#define ll long long
struct poi
{
	int c,w;
}a[107];
int dp[1007];//容量i的最大放置值
int t,m;
int main()
{
	cin>>t>>m;
	for(int i=1;i<=m;i++){
		scanf("%d%d",&a[i].c,&a[i].w);
	}
	for(int i=1;i<=m;i++){
		for(int j=t;j>=a[i].c;j--){//尝试从最大容量到合法最小容量放置
			dp[j]=max(dp[j],dp[j-a[i].c]+a[i].w);//尝试放置物品
		}
	}
	cout<<dp[t];
}
*/