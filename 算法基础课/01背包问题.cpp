#include<bits/stdc++.h>
using namespace std;
const int maxn=1005;
int f[maxn];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int v,w;
		cin>>v>>w;
		for(int j=m;j>=v;j--)
		f[j]=max(f[j],f[j-v]+w);
	}
	cout<<f[m]<<endl;
	return 0;
}