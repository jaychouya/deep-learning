#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,m,px,py,k,cnt,ans,x[1010],y[1010],a[55][55];
	scanf("%d%d%d",&n,&l,&m);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d%d",&x[i],&y[i]);
	}
	for(int i=m;i>=0;i--)
	{
		for(int j=0;j<=m;j++)
		{
			scanf("%d",&a[i][j]) ,k+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		px=x[i],py=y[i],cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(x[j]>=px&&x[j]<=px+m&&y[j]>=py&&y[j]<=py+m)
			{
			  if(	a[x[j]-px][y[j]-py]==1) cnt++;
				else cnt=-11;
			}
		}
		ans+=px+m<=1&&py+m<=1&&cnt==k;
	}
	printf("%d",ans);
	return 0;
}