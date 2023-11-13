#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int ph[N],hp[N];
int sized;
void heap_swap(int u,int t)
{
	swap(h[u],h[t]);
	swap(hp[u],hp[t]);
	swap(ph[hp[u]],ph[hp[t]]);
}
void down(int u)//构造堆
{
	int t=u;
	if(u*2<=sized&&h[t]>h[u*2])t=u*2;
	if(u*2+1<=sized&&h[t]>h[u*2+1])t=u*2+1;
	if(u!=t){
		heap_swap(u,t);
		down(t);
	}
}
void up(int u)
{
	if(u/2>0&&h[u]<h[u/2])
	{
		heap_swap(u,u/2);
		up(u>>1);
	}
}
int main(){
	int n;
	cin>>n;
	int m=0;
	while(n--)
	{
		string op;
		int k,x;
		cin>>op;
		if(op=="I")
		{
			cin>>x;
			m++;
			h[++sized]=x;
			ph[m]=sized;
			h[sized]=m;
			up(sized);
		}
		else if(op=="PM")cout<<h[1]<<endl;
		else if(op=="DM") 
		{
			heap_swap(1,sized);
			sized--;
			down(1);
		}
		else if(op=="C")
		{
			cin>>k>>x;
			h[ph[k]]=x;
			down(ph[k]);
		    up(ph[k]);
		}
		else if(op=="D")
		{
			cin>>k;
			int u=ph[k];
			heap_swap(u,sized);
			sized--;
			up(u);
			down(u);
		}
	}
	return 0;
}