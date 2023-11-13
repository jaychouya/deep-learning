#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int n,m,l=0,r=1e6,mid,now,cnt,a[N],b[N];
long long ans;
long long sum(int r,int n,int t)
{
	int l=r-t*(n-1);
	return (long long)(l+r)*n>>1;
}
bool check(int x)
{
	long long res=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>x)
		{
			res+=ceil((double)(a[i]-x)/b[i]);
		}
	}
	return res<=m;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	while(l<r)
	{
		mid=l+r>>1;
		if(check(mid))
		{
			r=mid;
		}
	    else 
	    {
	    	l=mid+1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>l)
		{
			now=ceil((double)(a[i]-l)/b[i]),cnt+=now;
			ans+=sum(a[i],now,b[i]);
		}
	}
	cout<<ans+(long long )l*(m-cnt);
}