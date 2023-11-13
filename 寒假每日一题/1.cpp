#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
const int maxn=1e5+10;
int a[maxn];
ll sum=0
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
	if(sum%3) cout<<"0";
	else 
	{
		ll average=sum/3;
		ll tot=0,js=0;
		ll ans=0;
		for(int i=1;i<n;i++)
		{
			tot+=a[i];
			if(tot==2*average) ans+=js;
			if(tot==average) ++js;
		}
		cout<<ans<<endl;
	}
}