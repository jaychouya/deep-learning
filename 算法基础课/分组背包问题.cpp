#include<bits/stdc++.h>
using namespace std;
int v[105],w[105],f[105];
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
      int s;
      cin>>s;
      for(int j=1;j<=s;j++) cin>>v[j]>>w[j];
      for(int j=m+1;j>=1;j--)
         for(int k=1;k<=s;k++)
          if(j>=v[k]) f[j]=max(f[j],f[j-v[k]]+w[k]);
   }
   cout<<f[m];
   return 0;
}