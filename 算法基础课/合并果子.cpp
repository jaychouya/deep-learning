#include<bits/stdc++.h>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int> > q; 

int main()
{
    scanf("%d", &n);

    while (n --)
    {
        int x;
        scanf("%d", &x);
        q.push(x); 
    }

    int res = 0;
    while (q.size() > 1) 
    {
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        int c = a + b; 

        res += c;
        q.push(c); 
    }

    printf("%d\n", res);

    return 0;
}

