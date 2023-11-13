#include<bits/stdc++.h>
using namespace std;
int T,m,l,r,mid;
long long n,a,b;
int main ()
{
    scanf ("%d", &T);
    while (T --)
    {
        scanf ("%lld%lld%lld", &n, &a, &b), m = n - a * b + 2;
        l = 1, r = m >> 1;
        while (l < r)
        {
            mid = l + r >> 1;
            if ((long long) mid * (m - mid) >= n)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if ((long long) l * (m - l) == n)
        {
            printf ("%d %d\n", l, m - l);
        }
        else
        {
            puts ("NO");
        }
    }
    return 0;
}
