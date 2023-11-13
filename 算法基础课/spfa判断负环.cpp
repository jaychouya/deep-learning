#include<bits/stdc++.h>
using namespace std;
const int N=2010,M=10010;
int n,m;
int h[N],e[M],ne[M],w[M],idx;
bool st[N];
int dist[N];
int cnt[N];
void add(int a,int b,int c)
{
	e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
bool spfa()
{
	queue<int>q;
	for(int i=1;i<=n;i++){
		q.push(i);
		st[i]=true;
	}
	while(q.size()){
		int t=q.front();
		q.pop();
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i])
		{
			int j=e[i];
			if(dist[j]>dist[t]+w[i])
			{
				dist[j]=dist[t]+w[i];
				cnt[j]=cnt[i]+1;
				if(cnt[j]>=n)
				{
					return true;
				}
				if(!st[j]){
					q.push(j);
					st[j]=false;
				}
			}
		}
	}
	return false;
}
int main()
{
	cin>>n>>m;
	memset(h,-1,sizeof h);
	for(int i=0;i<m;i++)
	{
	   int a,b,c;
	   cin>>a>>b>>c;
	   add(a,b,c);
	}
	if(spfa()){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}