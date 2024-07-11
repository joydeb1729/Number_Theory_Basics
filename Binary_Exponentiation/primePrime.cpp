#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxNum = 1000002;
int arr[maxNum];
int primePrime[maxNum];

void solve() {
    int l, r;
    cin >> l >> r;
    cout << primePrime[r] - primePrime[l - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;

    arr[0] = arr[1] = 1;


    for (i = 2; i * i < maxNum; i++) {
        if (!arr[i]) {
            for (j = i * i; j < maxNum; j += i) {
                arr[j] = 1;
            }
        }
    }

    int count = 0;
    for (i = 2; i < maxNum; i++) {
        if (!arr[i]) count++;
        primePrime[i] = primePrime[i - 1] + (!arr[count]);
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
