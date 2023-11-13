#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int p[N];
int find(int x)
{
	if(p[x]!=x)
	p[x]=find(p[x]);
	return p[x];
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) p[i]=i;
	while(m--){
		char op[2];
		int a,b;
		cin>>op>>a>>b;
		if(op[0]=='M')p[find(a)]=find(b);
		else 
		{
		  if(find(a)==find(b)) cout<<"Yes"<<'\n';
		  else cout<<"No"<<'\n';
		}	
	}
	return 0;
}