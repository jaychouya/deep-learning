#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=6010;
int n;
int happy[N];
int f[N][2];
int e[N],ne[N],h[N],idx;
int a,b;
bool father [N];
void add(int a,b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;//建立一棵树
}
void dfs(int u)
{
    f[u][1]=happy[u];//选中1，代表选中当前节点，那么上下节点不可以取得，获得当前点的快乐
    for(int i=h[u];i!=-1;i=ne[i])//对于这个树进行遍历
    {
    	int j=e[i];
    	dfs(j);//进行回溯
    	f[u][0]+=max(f[j][1],f[j][0]);
    	f[u][1]+=f[j][0];
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",happy[i]);
	memset(h,-1,sizeof h)l;
	for(int i=1;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		father[a]=true;//对于点进行标记
		add(b,a);
	}
	int root=1;
	while(father[root])root++;
	dfs(root);
	printf("%d\n",max(f[root][1],f[root][0]));
	return 0;
}