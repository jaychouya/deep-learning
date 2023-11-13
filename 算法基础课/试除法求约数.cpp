#include<bits/stdc++.h>
using namespace std;
int n;
void discover(int n)
{
	vector<int>res;
	for(int i=1;i<=n/i;i++)
	{
		if(n%i==0)
		res.push_back(i);
		if(i!=n/i)
		{
			res.push_back(n/i);
		}
	}
	sort(res.begin(),res.end());
	for(auto x:res)
	{
		cout<<x<<' ';
	}
	cout<<endl;
}
int main()
{
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		discover(m);
	}
	return 0;
}