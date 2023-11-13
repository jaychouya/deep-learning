#include<bits/stdc++.h>
using namespace std;
const int N=200010,M=100010;
int p[M];
int n,m;
struct edge
{
	int a,b,w;
    bool operator< (const edge &W)const
    {
        return w < W.w;
    }
}edges[N];
int find(int x)
{
	if(p[x]!=x) p[x]=find(p[x]);
	 else return x;
}
int kruskal()
{
	int res=0,cnt=0;
	for(int i=0;i<m;i++)
	{
		int a=edges[i].a,b=edges[i].b,w=edges[i].w;
		if(find(a)!=find(b))
		{
			p[find(a)]=p[find(b)];
			cnt++;
			res+=w;
		}
	}
	if(cnt==n-1) return res;
	else return 0x3f3f3f3f;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) p[i]=i;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		edges[i]={a,b,w};
	}
	sort(edges,edges+m);
	int t=kruskal();
	if(t==0x3f3f3f3f )cout<<"impossible"<<endl;
	else cout<<t<<endl;
	return 0;
}