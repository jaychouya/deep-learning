#include<iostream>
using namespace std;
const int mod=1e9+7,N=1e5+10;
typedef long long LL;
long long fac[N],infac[N];
int quick_pow(int a, int k, int p)
{
    int res = 1;
    while (k)
    {
        if (k & 1) res = (LL)res * a % p;
        a = (LL)a * a % p;
        k >>= 1;
    }
    return res;
}
int main()
{
    int n;
    fac[0]=infac[0]=1;
    for(int i=1;i<=1e5;i++)
    {
        fac[i]=fac[i-1]*i%mod;
        infac[i]=(LL)infac[i - 1] * quick_pow(i,mod-2,mod)%mod;
    }
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(LL)fac[a] * infac[b] % mod * infac[a - b] % mod<<endl;
    }
}
