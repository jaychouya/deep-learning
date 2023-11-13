#include<bits/stdc++.h>
using namespace std;
const int N=100010,M=1000010;
char q[N],s[M];
int ne[N];
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
	cin>>n>>q+1>>m>>s+1;
	for(int i=2,j=0;i<=n;i++)
	{
		while(j&&q[i]!=q[j+1])j=ne[j];
		if(q[i]==q[j+1])j++;
		ne[i]=j;
	}
	for(int i=1,j=0;i<=m;i++)
	{
		while(j&&s[i]!=q[j+1]) j=ne[i];
		if(s[i]==q[j+1]) j++;
		if(j==n)
		{
			cout<<i-j<<' ';
			j=ne[j];
		}
	}
	return 0;
}