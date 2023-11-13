#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int b[N];
int n,m,k;
int main()
{
	scanf("%d%d%d",&n,&m,&k);
	while(n--){
		int t,c;
		scanf("%d%d",&t,&c);
		int l=t-k-c+1,r=t-k;
		if(r>0) b[max(1,l)]++,b[r+1]--;
	}
	for(int i=1;i<N;i++) b[i]+=b[i-1];
	while(m--){
		int t;
		scanf("%d",&t);
		printf("%d\n",b[t]);
	}
	return 0;
}