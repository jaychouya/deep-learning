#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pll;
const int N=100010,M=1e9+10;
int l,r,n;
pll s[N];
int res;
int main()
{
    cin >> l >> r >> n;

    for (int i = 0; i < n; i++)
        scanf("%d%d", &s[i].first, &s[i].second);

    sort(s, s + n);

    for (int i = 0; i < n; i++)
    {
        if (s[i].first > l)  
        {
            cout << -1;
            return 0;
        }
        int temp = -M;
        for (int j = i; j < n && s[j].first <= l; j++)
        {
            temp = max(temp, s[j].second);
            i = j;
        }
        l = temp;
        res++; 
        if (l >= r) break;
    }

    if (l >= r) cout << res;
    else cout << -1;

    return 0;
}
