#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int cnt,x,y;
int a[1010][1010];
map<int,int>mp;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
bool check(int x,int y)
{
	for(int i=0;i<8;i++)
	{
		int tempx=x+dx[i];
		int tempy=y+dy[i];
		if(tempx<0||tempx>=n||tempy<0||tempy>=m)continue;
		if(abs(a[tempx][tempy]-a[x][y])<=k)return false;
	}
	return true;
}
int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) cin>>a[i][j],mp[a[i][j]]++;	
	}
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	  {
	  	if(mp[a[i][j]]>1) continue;
	  	if(check(i,j))cnt++,x=i,y=j;
	  }
	  if(cnt==0)cout<<"Not Exist"<<endl;
	  if(cnt==1) printf("(%d ,%d):%d",y+1,x+1,a[i]);
	  else cout<<"Not Unique"<<endl;
	  return 0;
}