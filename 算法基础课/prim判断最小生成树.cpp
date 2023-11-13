#include<bits/stdc++.h>
using namespace std;
const int N=510;
int dist[N];
int pre[N],st[N];
int g[N][N];
int n,m;
void prim()
{
	memset(dist,0x3f,sizeof dist);
	int res=0;
	dist[1]=0;
	for(int i=0;i<n;i++)
	{
		int t=-1;
		for(int j=1;j<=n;j++){
			if(!st[j]&&(t==-1||dist[j]<dist[t]))
			   t=j;
		}
		if(dist[t]==0x3f3f3f3f){
			cout<<"impossible";
			return ;
		}
		st[t]=1;
		res+=dist[t];
		for(int i=1;i<=n;i++)
		{
			if(dist[i]>g[t][i]&&!st[i]){
				dist[i]=g[t][i];
				pre[i]=t;
			}
		}
	}
	cout<<res;
}
void getpath()
{
	for(int i=n;i>1;i--)
	{
		cout<<i<<" "<<pre[i]<<endl;
	}
}
int main()
{
	memset(g,0x3f,sizeof g);
	cin>>n>>m;
	while(m--){
		int a,b,w;
		cin>>a>>b>>w;
		g[a][b]=g[b][a]=min(g[a][b],w);
	}
	prim();
	return 0;
}