#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int t=i;
		while(t)
		{
			if(t%10==k)sum++;
			t/=10;
		}
	}
	cout<<sum;
	return 0;
}