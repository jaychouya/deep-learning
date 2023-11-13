#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int qmi(int a,int k,int p)
{
	int res=1;
	while(k)
	{
		if(k&1) res=res*a%p;
		k>>=1;
		a=a*a%p;
	}
	return res;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,k,p;
		scanf("%d%d%d",&a,&k,&p) ;
		printf("%d\n",qmi(a,k,p));
	}
	return 0;
}