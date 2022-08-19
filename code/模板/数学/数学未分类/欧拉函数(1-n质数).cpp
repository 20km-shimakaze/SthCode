#include <iostream>
using namespace std;
 
//欧拉函数直接筛选
long long direct_phi(long long x)
{
    long long ans = x;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans = ans * (i-1) / i;	 //这个对应的就是欧拉函数的通式
            while(x % i == 0){      // 完全筛去 i 因子，确保下一个得到的 i 是 n 的素因子
                x = x / i;
            }
        }
    }
    if (x > 1) {        // 为了保证防止未除掉的素因子出现
        ans = ans * (x-1) / x;
    }
    return ans;
}
 
int main(int argc, char** argv)
{
    long long n;
    cin>> n;
    cout<< direct_phi(n)<< endl;
    return 0;
}