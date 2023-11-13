#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 1e5 + 10, M = 2e5 + 10; // 由于是无向图, 顶点数最大是N，那么边数M最大是顶点数的2倍
int e[M], ne[M], h[N], idx;
int st[N];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
}

bool dfs(int u, int color) {
    st[u] = color;

    for(int i = h[u]; i != -1; i = ne[i]){
        int j = e[i];
        if(!st[j]) {
            if(!dfs(j, 3 - color)) return false;
        }else if(st[j] == color) return false;
    }

    return true;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);

    memset(h, -1, sizeof h);
    while (m --){
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b), add(b,a); 
    }

    bool flag = true;
    for(int i = 1; i <= n; i ++){
        if(!st[i]){
            if(!dfs(i, 1)){
                flag = false;
                break;
            }
        }
    }

    if(flag) puts("Yes");
    else puts("No");
    return 0;
}
