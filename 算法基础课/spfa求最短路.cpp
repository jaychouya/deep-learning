#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
typedef pair<int,int>pll;
int h[N],e[N],w[N],ne[N],idx=0;
int dist[N];
bool st[N];
int n,m;
void add(int a,int b,int c){
	e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
int spfa()
{
	queue<pll>q;
	memset(dist,0x3f,sizeof dist);
	dist[1]=0;
	q.push({0,1});
	st[1]=true;
	while(q.size())
	{
		pll p=q.front(); 
		int t=p.second;
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i]){
			int j=e[i];
			if(dist[j]>dist[t]+w[i]){
				dist[j]=dist[t]+w[i];
				if(!st[j]){
					st[j]=true;
				q.push({dist[j],j});
				}
			}
		}
	}
	if(dist[n]=0x3f3f3f3f) return -1;
	else return dist[n];
}
int main()
{
	cin>>n>>m;
	memset(h,-1,sizeof h);
	while(m--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z);
	}
	int res=spfa();
	if(res==-1)cout<<"impossible"<<endl;
	else cout<<res<<endl;
	return 0;
}