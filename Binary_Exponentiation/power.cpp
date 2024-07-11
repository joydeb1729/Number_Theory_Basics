#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// Noob Approach O(n)
int power1(int a, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= a;
    }
    return res;
}

// Optimized Approach O(LogN)
int power2(int a, int n) {
    int res = 1;
    while (n) {
        if (n % 2 == 0) {
            a *= a;
            n /= 2;
        } else {
            res *= a;
            n--;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, n;
    cin >> a >> n;

    cout << power1(a, n) << endl;
    cout << power2(a, n) << endl;

    return 0;
}
