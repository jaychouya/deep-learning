#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n<2)return false;
	for(int i=2;i<=n/i;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(isprime(x)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}