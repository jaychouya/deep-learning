#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
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
		}
	}
	ll res=1;
	for(auto y:primes) res=res*(y.second+1)%mod;
	cout<<res<<endl;
	return 0;
}