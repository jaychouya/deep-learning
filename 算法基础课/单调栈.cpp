#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int skt[N],tt;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		while(tt&&skt[tt]>=x)	tt--;
		if(!tt)cout<<-1;
		else cout<<skt[tt];
		skt[++tt]=x;
	}
	return 0;
}