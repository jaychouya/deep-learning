#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int n,q,x,a[maxn];
int main(){
	cin>>n>>q;
	for(int i=0;i<n;i++)cin>>a[i];
	while(q--){
		cin>>x;
		int l=0,r=n-1;
		while(l<r){
			int mid=l+r>>1;
			if(a[mid]<x)l=mid+1;
			else r=mid;
		}
		if(a[l]!=x){
			cout<<-1<<' '<<-1<<endl;
			continue;
		}
		int l1=l,r1=n;
		while(l1+1<r1){
			int mid=l1+r1>>1;
			if(a[mid]<=x)l1=mid;
			else r1=mid;
		}
		cout<<l<<' '<<l1<<endl;
	}
	return 0;
}