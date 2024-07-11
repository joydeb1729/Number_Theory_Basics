//TDKPRIME - Finding the Kth Prime
//https://www.spoj.com/problems/TDKPRIME/



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxNum = 90000000;
ll arr[maxNum + 1];
vector<int> primes;

void solve() {
    int n;
    cin >> n;
    cout << primes[n - 1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;

    arr[0] = arr[1] = 1;

    for (i = 2; i * i <= maxNum; i++) {
        if (!arr[i]) {
            for (j = i * i; j <= maxNum; j += i) {
                arr[j] = 1;
            }
        }
    }

    for (i = 2; i <= maxNum; i++) {
        if (!arr[i]) {
            primes.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
