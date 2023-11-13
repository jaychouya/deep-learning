#include<bits/stdc++.h>
using namespace 	std;
const int N=3e5+10;
int n,m,a[N],f[N];
int main()
{
	scanf("%d%d",&n,&m);
	int sum=0;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),sum+=a[i];
	sum-=m;
	for(int i=1;i<=n;i++)
	{
		int v=a[i],w=a[i];
		for(int j=sum;j>=v;j--)
		{
			f[j]=max(f[j],f[j-v]+w);
		}
	}
	printf("%d\n",sum+m-f[sum]);
	return 0;
}