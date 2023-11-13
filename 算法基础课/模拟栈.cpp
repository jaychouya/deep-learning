#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int st[N];
int top=-1;
int n;
int main(){
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="push")
		{
			int a;
			cin>>a;
			st[++top]=a;
		}
		if(s=="pop")
		{
			top--;
		}
		if(s=="query")
		{
			cout<<st[top]<<endl;
		}
		if(s=="empty")
		{
			cout<<(top==-1?"YES":"NO")<<endl;
		}
	}
	return 0;
}