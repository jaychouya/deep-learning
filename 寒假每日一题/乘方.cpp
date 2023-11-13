#include <bits/stdc++.h>

using namespace std;

long long quickpow(long long a, long long b) {
    long long res = 1;

    while (b) {
        if (b & 1) {
            res = res * a;
        }

        a *= a;

        b >>= 1;

        if (res > 1e9) return -1;
        if (res < 0) return -1; 
    }

    return res;
}

int main() {
    long long a, b;

    cin >> a >> b;

    cout << quickpow(a, b) << endl;

    return 0;
}

