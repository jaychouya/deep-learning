#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long a[N],b[N];
int main(){
	int n,m,i,j;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++)cin>>b[i];
	for(int i=1,j=1;j<=m;j++)
	{
		while(a[i]==b[j]&&i<=n)i++;
	}
	if(i==n+1) cout<<"Yes";
	else cout<<"No";
	return 0;
}