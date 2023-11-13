#include<bits/stdc++.h>
using namespace std;
long long sum[1000500],a[1000050];
int main()
{
	long long n,maxn=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long tmp;
		cin>>tmp;
		a[tmp]++;
		if(maxn<tmp)maxn=tmp;
	}
	sum[maxn]=a[maxn];
	for( long long i=maxn;i>=1;i--)
	{
		sum[i-1]=sum[i]+a[i-1];
	}
	long long res=0,ans=0;
	for(long long i=maxn;i>=1;i--)
	{
		if(i*sum[i]>=res)
		{
			res=i*sum[i];
			ans=i;
		}
	}
	cout<<res<<' '<<ans;
	return 0;
}