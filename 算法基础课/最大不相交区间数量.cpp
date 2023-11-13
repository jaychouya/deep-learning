#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int>pll;
const int N=100010;
int n;
pll s[N];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i].first>>s[i].second;
	sort(s+1,s+1+n);
	int ans=1,maxn=s[1].second;
	for(int i=2;i<=n;i++)
	{
		if(s[i].first<=maxn) maxn=min(maxn,s[i].second);
		else ans++,maxn=s[i].second;
	}
	cout<<ans;
	return 0;
}