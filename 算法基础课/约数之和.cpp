#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=110,mod=1e9+7;
int main()
{
	int n;
	cin>>n;
	unordered_map<int,int>primes;
	while(n--)
	{
		int x;
		cin>>x;
		for(int i=2;i<=x/i;i++)
		{
			while(x%i==0)
			{
				x/=i;
				primes[i]++;
			}
			if(x>1) primes[x]++;
		}
	}
	ll res=1;
	for(auto p:primes)
	{
		ll a=p.first,b=p.second;
		ll t=1;
		while(b--) t=(t*a+1)%mod;
		res=res*t%mod;
	}
	cout<<res;
	return 0;
}