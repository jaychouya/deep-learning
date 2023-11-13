#include<bits/stdc++.h>
using namespace std;
const int N=510,M=10010;
struct edge{
	int a, b, w;
}e[M];
int dist[N],back[N];
int n,m,k;
int bellman()
{
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	for(int i=0;i<k;i++){
	  memcpy(back,dist,sizeof dist);
	   for(int j=0;j<m;j++){
	   	 int a=e[j].a,b=e[j].b,w=e[j].w;
	   	 dist[b]=min(dist[b],back[a]+w);
	   }
    }
    if(dist[n]>0x3f3f3f3f /2)return -2;
    else return dist[n];
}
int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		e[i]={a,b,w};
	}
	int res=bellman();
	if(res==-2) cout<<"impossible"<<endl;
	else cout<<res<<endl;
	return 0;
}