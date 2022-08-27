#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
struct node{
    double x,y;
}; 

double cmp(node a,node b) //���߶ε��������� 
{
    if(a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}

double compute(double x1,double y1,double x2,double y2) //�����˵Ľ�� 
{
    return x1*y2 - y1*x2;
}

int cmpp(node a,node b) //�Ƚ�����Ĵ�С  
{
    if(a.x < b.x || a.x == b.x && a.y < b.y)
        return -1;
    else if(a.x == b.x && a.y == b.y)
        return 0;
    else return 1;
}
node no[4];
void solve()
{
    cin>>no[0].x>>no[0].y>>no[2].x>>no[2].y>>no[1].x>>no[1].y>>no[3].x>>no[3].y;
    sort(no,no+2,cmp); //����һ���߶ε��������� 
    sort(no+2,no+4,cmp); //���ڶ������� 
    /*for(int i=0; i<4; ++i)
        cout<<no[i].x<<' '<<no[i].y<<endl;*/
    
    int flag=0;
    if(!cmpp(no[0],no[2]) || !cmpp(no[0],no[3]) || !cmpp(no[1],no[2]) || !cmpp(no[1],no[3])) //����ĳһ���غϣ���϶��ཻ 
        flag = 1;
    
    else if(compute(no[0].x-no[1].x , no[0].y-no[1].y , no[2].x-no[3].x , no[2].y-no[3].y) ==0 ) //�����߶�ƽ�� 
    {
        if(compute(no[0].x-no[1].x , no[0].y-no[1].y , no[0].x-no[3].x , no[0].y-no[3].y) == 0) //�����߶ι��� 
        {
            if(cmpp(no[0],no[2]) <= 0 && cmpp(no[1],no[2]) >= 0) //��һ�����С�ڵڶ�����㣬��һ���յ���ڵڶ������ 
                flag = 1;
            else if(cmpp(no[2],no[0]) >= 0 && cmpp(no[3],no[0]) <= 0)
                flag = 1;
        }
    }
    
    else if(compute(no[0].x-no[1].x , no[0].y-no[1].y , no[2].x-no[3].x , no[2].y-no[3].y) !=0 )
    {
        double num1,num2,num3,num4;
        num1 = compute(no[0].x-no[1].x , no[0].y-no[1].y , no[0].x-no[2].x , no[0].y-no[2].y); 
        num2 = compute(no[0].x-no[1].x , no[0].y-no[1].y , no[0].x-no[3].x , no[0].y-no[3].y); 
        num3 = compute(no[0].x-no[2].x , no[0].y-no[2].y , no[2].x-no[3].x , no[2].y-no[3].y); 
        num4 = compute(no[1].x-no[2].x , no[1].y-no[2].y , no[2].x-no[3].x , no[2].y-no[3].y); 
        if(num1*num2 < 0 && num3*num4 <= 0 || num1*num2 <= 0 && num3*num4 < 0)
            flag = 1;
    }
    puts(flag?"Yes":"No");
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}