#include<bits/stdc++.h>
using namespace std;
const int N=1e8+8;
int n,a,b;
int num[N];
int nums(int l,int r)
{
	int ans=0;
	for(int i=l;i>=r;i--) ans=ans*10+num[i];
	return ans;
}
int pow(int i)
{
	int ans=1;
	while(i--) ans*=10;
	return ans;
}
int work(int n,int x)
{
	if(n==0) return 0;
	int len=0;
	while(n) 
	{
		num[++len]=n%10;
		n/=10;
	}
	int ans=0;
	if(x!=0)
	{
		for(int i=len;i>0;i--) 
		{
			if(i<len) ans+=nums(len,i+1)*pow(i-1);
			if(num[i]==x)ans+=nums(i-1,1)+1;
			else if(num[i]>x) ans+=pow(i-1);
			else ans+=0;
		}
	}
	else
	{
		for(int i=len-1;i>0;i--) 
		{
			ans+=(nums(len,i+1)-1)*pow(i-1);
			if(num[i]==x) ans+=nums(i-1,1)+1;
			else if(num[i]>x)ans+=pow(i-1);
			else ans+=0;
		}
	}
	return ans;
}
int main()
{
	while((cin>>a>>b)&&a!=0&&b!=0)
	{
		if(a>b)swap(a,b);
		for(int i=0;i<=9;i++)
		{
			int ans=work(b,i)-work(a-1,i);
			cout<<ans<<' ';
		}
		cout<<endl;
	}
	return 0;
}