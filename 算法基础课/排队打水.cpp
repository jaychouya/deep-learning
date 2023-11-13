#include<bits/stdc++.h>
using namespace std;
const int N=1000010;
int a[N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a,a+n);
	long long res=0,t=0;
	for(int i=1;i<=n;i++)
	{
		res+=t;
		t+=a[i];
	}
	cout<<res<<endl;
	return 0;
}