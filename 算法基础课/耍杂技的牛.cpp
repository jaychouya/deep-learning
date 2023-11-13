#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int>pll;
const int N=5e4+10;
pll a[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		a[i].first=x+y;
		a[i].second=y;
	}
	sort(a,a+n);
	ll res=-1e9,sum=0;
	for(int i=0;i<n;i++)
	{
		sum-=a[i].second;
		res=max(res,sum);
		sum+=a[i].first;
	}
	cout<<res<<endl;
	return 0;
}