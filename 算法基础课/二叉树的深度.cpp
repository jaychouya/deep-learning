#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,sum=0,l,r;
struct lol
{
	int l,r;
}tree[N];
void dfs(int d,int distance)
{
	if(d==0)return;
	sum=max(sum,distance);
	dfs(tree[d].l,distance+1);
	dfs(tree[d].r,distance+1);
	
}
int main()
{	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>l>>r;
		tree[i]={l,r};
	}
	dfs(1,1);
	cout<<sum<<endl;
	return 0;
}