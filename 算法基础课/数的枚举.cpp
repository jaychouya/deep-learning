#include<bits/stdc++.h>
using namespace std;
const int  N=10;
int a[N],b[N];
int n;
void dfs(int u)
{
    if(u > n)
    {
        for(int i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    for(int i = 1; i <= n; i++)
    {
        if(!a[i])
        {
            b[u] = i;
            a[i] = 1;
            dfs(u + 1);
            a[i] = 0;
        }
    }
}
int main()
{
	cin>>n;
	dfs(1);
}


