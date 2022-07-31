#include<bits/stdc++.h>
using namespace std;
void slove()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int a1=a[1]*2;
    int a2=a[0]+a[2];
    if(a1==a2){
        cout<<0<<endl;
        return;
    }
    else {
        int sum=abs(a1-a2);
        if(sum%3==0){
            cout<<0<<endl;
        }
        else cout<<1<<endl;
    }
}
int main()
{
    int __;cin>>__;
    while(__--)slove();
}
//看a1和a2的差%3等于0输出0，不等于输出1
//证明：由于加一减一，所以所有数可以交换位置，排序后，a1和a2加一减一，每次影响d数值为3，所以最终答案只有1,0