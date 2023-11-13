#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long sum=0,a[1000010],ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i],sum+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		ans+=a[i]*(sum-a[i]);
	}
	cout<<ans/2<<endl;
	return 0;
}