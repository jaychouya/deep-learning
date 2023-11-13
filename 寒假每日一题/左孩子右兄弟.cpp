#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int dfs(int u)
{
	int ans=0;
	int cnt=g[u].size();
	for(int i=0;i<g[u].size();i++)
	{
		ans=max(ans,dfs(g[u][i])+cnt);
	}
	return ans;
}
int n;
int main()
{
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		g[x].push_back(i);
	}
	int ans=dfs(1);
	cout<<ans;
	return 0;
}