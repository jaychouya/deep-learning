#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,l,r,a[1000010],b[1000010];
	long long sum,ans;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	while(m--)
	{
		cin>>l>>r,b[l++],b[r+1]--;
	}
	for(int i=1;i<=n;i++)
	b[i]+=b[i-1],sum+=(long long )a[i]*b[i];
	sort(a+1,a+1+n),sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	{
		ans+=(long long )a[i]*b[i];
	}
	cout<<ans-sum;
	return 0;
}