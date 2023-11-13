#include<bits/stdc++.h>
using namespace std;
int n,a[100005],ans;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        ans+=abs(a[i]-a[n/2]);
    cout<<ans;
}