#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a[N],sum[N];
int main()
{
	int n,m,x;
	cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>x;
    	sum[i]=x+sum[i-1];
	}
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}