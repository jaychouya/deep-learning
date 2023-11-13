#include<bits/stdc++.h>
using namespace std;
const int N=10010;
int dist[N];
int q[N],hh=0,tt=-1;
int e[N],w[N],h[N],idx,ne[N];
bool st[N];
void add(int a,int b,int c)
{
	e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
void spfa()
{
	q[++tt]=1;
	dist[1]=0;
	st[1]=true;
	while(tt>=hh)
	{
		int a=q[hh++];
		st[a]=false;
		for(int i=h[a];i!=-1;i=ne[i])
		{
			int b=e[i],c=w[i];
			if(dist[b]>dist[a]+c){
				dist[b]=dist[a]+c;
				if(!st[b]){
					q[++tt]=b;
					st[b]=true;
				}
			}
		}
	}
}
int main()
{
    memset(h,-1,sizeof h);	
    memset(dist,0x3f,sizeof dist);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
    	int a,b,w;
    	cin>>a>>b>>w;
    	add(a,b,w);
	}
	spfa();
	if(dist[n]=0x3f3f3f3f)
	cout<<"impossible";
	else cout<<dist[n];
	return 0;
}
