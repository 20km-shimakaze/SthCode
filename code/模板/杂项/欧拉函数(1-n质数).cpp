#include <iostream>
using namespace std;
 
//ŷ������ֱ��ɸѡ
long long direct_phi(long long x)
{
    long long ans = x;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans = ans * (i-1) / i;	 //�����Ӧ�ľ���ŷ��������ͨʽ
            while(x % i == 0){      // ��ȫɸȥ i ���ӣ�ȷ����һ���õ��� i �� n ��������
                x = x / i;
            }
        }
    }
    if (x > 1) {        // Ϊ�˱�֤��ֹδ�����������ӳ���
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