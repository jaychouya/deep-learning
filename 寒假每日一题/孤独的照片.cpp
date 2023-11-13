#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,l[N],r[N];
char s[N];
long long ans;
int main()
{
	cin>>n>>s;
	for(int i=0,g=0,h=0;i<n;i++)
	{
		if(s[i]=='H')l[i]=g,g=0,h++;
		else l[i]=h,h=0,g++;
	}
	for(int i=n-1,g=0,h=0;i!=-1;i--)
	{
		if(s[i]=='H')r[i]=g,g=0,h++;
		else r[i]=h,h=0,g++;
	}
	for(int i=0;i<n;i++)
	{
		if(l[i]+r[i]>1) 
		{
			long long cnt=(long long)l[i]*r[i]+max(0,l[i]-1)+max(0,r[i]-1);
			ans+=cnt;
		}
	}
	cout<<ans<<endl;
	return 0;
}