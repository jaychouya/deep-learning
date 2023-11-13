#include<bits/stdc++.h>
using namespace std;
const int N=6010;
int n;
int happy[N];
int f[N][2];
int e[N],ne[N],h[N],idx;
bool father[N];
void add(int a,int b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
void dfs(int u)
{
	f[u][1]=happy[u];
	for(int i=h[u];i!=-1;i=ne[i])
	{
		int j=e[i];
		dfs(j);
		f[u][0]+=max(f[j][1],f[j][0]);
		f[u][1]+=f[j][0];
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>happy[i];
	memset(h,-1,sizeof h);
	for(int i=1;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		father[a]=true;
		add(b,a);
	}
    int root=1;
    while(father[root])root++;
    dfs(root);
    cout<<max(f[root][0],f[root][1])<<endl;
    return 0;
}