#include<bits/stdc++.h>
using namespace std;
const int  maxn=1e5+5;
int a[maxn],f[maxn];
int cnt;
int find(int x)
{
	int l=1,r=cnt;
	while(l<r)
	{
		int mid=l+r>>1;
		if(f[mid]>=x) r=mid;
		else l=mid+1;
	}
	return l;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[++cnt]=a[1];
	for(int i=2;i<=n;i++)
	{
		if(a[i]>f[cnt]) f[++cnt]=a[i];
		else{
			int tmp=find(a[i]);
			f[tmp]=a[i];
		}
	}
	cout<<cnt<<endl;
	return 0;
}