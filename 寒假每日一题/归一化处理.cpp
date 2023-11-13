#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int w[100010];
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
		sum+=w[i];
	}
	double avg=(double) sum/n;
	double d=0;
	for(int i=0;i<n;i++)
	{
		d+=pow(w[i]-avg,2)/n;
	}
	d=sqrt(d);
	for(int i=0;i<n;i++)
	printf("%lf\n",(w[i]-avg)/d);
	return 0;
}