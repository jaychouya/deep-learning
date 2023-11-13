#include<bits/stdc++.h>
using namespace std;
int n;
const int N=100010;
int b[2*N],idx;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int l,r;
		cin>>l>>r;
		b[idx++]=l*2;
		b[idx++]=r*2+1;
	}
	sort(b,b+idx);
	int res=0,t=0;
	for(int i=0;i<idx;i++)
	{
		if(b[i]%2==0)t++;
		else t--;
		res=max(res,t);
	}
	cout<<res;
	return 0;
}