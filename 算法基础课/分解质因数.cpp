#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
	for(int i=2;i<=a/i;i++)
	{
		if(a%i==0){
			int s=0;
			while(a%i==0)
			{
				a/=i;
				s++;
			}
			cout<<i<<' '<<s<<endl;
		}
		if(a>1)cout<<a<<" "<<1<<endl;
	}
}
	return 0;
}