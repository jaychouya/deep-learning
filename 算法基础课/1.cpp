#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1e5+10;
struct range{
	int l,r;
	
}ranges[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		ranges[i]={l,r};	
	}
	sort(ranges,ranges+n);
	int res=0,st=-2e9;
	for(int i=0;i<n;i++)
	{
		if(st<ranges[i].l)
		{
			res++;
			st=ranges[i].r;
		}
	}
	cout<<res<<endl;
	return 0;
}