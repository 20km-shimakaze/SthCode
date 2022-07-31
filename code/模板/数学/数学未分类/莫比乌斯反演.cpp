#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+7;
int mu[MAXN];
bool isnp[MAXN];
vector<int> primes;
void init(int n)
{
    mu[1] = 1;
    for (int i = 2; i <= n; i++){
        if (!isnp[i])primes.push_back(i), mu[i] = -1; // ����Ϊ-1
        for (int p : primes){
            if (p * i > n)break;
            isnp[p * i] = 1;
            if (i % p == 0){
                mu[p * i] = 0; // ��ƽ������Ϊ0
                break;
            }
            else mu[p * i] = mu[p] * mu[i]; // ���ʣ����û��Ժ�������
        }
    }
}
int main()
{
    init(50);
    for(int i=1;i<=30;i++){
        cout<<i<<"="<<isnp[i]<<" ";
    }
}