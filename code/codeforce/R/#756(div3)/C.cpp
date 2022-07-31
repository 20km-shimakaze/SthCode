#include<iostream>
using namespace std;
int a[2000005],n;
void slove()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(a[1]!=n&&a[n]!=n){
        cout<<-1<<endl;
        return;
    }
    int flag=0;
    if(a[1]==n)flag=1;
    if(flag){
        cout<<n<<" ";
        for(int i=n;i>=2;i--){
            cout<<a[i]<<" ";
        }
    }
    else{
        for(int i=n-1;i>=1;i--){
            cout<<a[i]<<" ";
        }
        cout<<n<<" ";
    }
    puts("");
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}
//结论题，由题可知，每次只删除两端中较小的一端，所以在最后输出的数组中一定n在两端，否则输出-1
//因此，可以构造答案数组，将n在的那一端保留剩下的n-1个数倒序（每次比较由于n比其他数大，所以剩下的n-1个数会交换位置）