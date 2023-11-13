#include<cstdio>
int n,m,a[25];
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)   scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)   printf("%d ",m%a[i]),m/=a[i];
    return 0;
}