#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
vector<int> add(vector<int>&A,vector<int>&B)
{
	vector<int>c;
	if(A.size()<B.size()) add(B,A);
	int t=0;
	for(int i=0;i<A.size()||i<B.size();i++)
	{
		if(i<A.size())t+=A[i];
		if(i<B.size())t+=B[i];
		c.push_back(t%10);
		t/=10;
	}
	if(t)c.push_back(1);
	return c;
}
int main(){
	string a,b;
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	vector<int>A,B;
	cin>>a>>b;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
	auto c=add(A,B);
	for(int i=c.size()-1;i>=0;i--)cout<<c[i];
	return 0;
}