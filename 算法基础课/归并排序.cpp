#include <bits/stdc++.h>
using namespace std;
const int N = 1000010;
int q[N],tmp[N];
void merge(int q[],int l,int r)
{
	if(l>=r)return ;
	int mid=l+r>>1;
	merge(q,l,mid),merge(q,mid+1,r);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r)
	if(q[i]<=q[j])tmp[k++]=q[i++];
	else tmp[k++]=q[j++];
	while(i<=mid)tmp[k++]=q[i++];
	while(j<=r)tmp[k++]=q[j++];
	for(int i=l,j=0;i<=r;i++,j++) q[i]=tmp[j];
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>q[i];
	merge(q,1,n);
	for(int i=1;i<=n;i++)cout<<q[i]<<' ';
	return 0;
}