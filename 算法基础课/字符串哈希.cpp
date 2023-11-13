#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int N=1e5+10,p=131;
ull h[N],a[N];
ull query(int l,int r)
{
	return h[r]-h[l-1]*a[r-l+1];
}
int main(){
	int n,m;
	cin>>n>>m;
	string x;
	cin>>x;
	a[0]=1;
	h[0]=0;
	for(int i=0;i<n;i++)
	{
		a[i+1]=a[i]*p;
		h[i+1]=h[i]*p+x[i];
	}
	while(m--){
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(query(l1,r1)==query(l2,r2)) cout<<"Yes"<<'\n';
		else cout<<"No"<<'\n';
	}
	return 0;
}