#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define maxNum 1000001

int primes[maxNum]; // Corrected size of the array

void sieve() {
    // Initialize all entries as true. A value in primes[i] will
    // finally be false if i is Not a prime, true otherwise.
    fill(primes, primes + maxNum, 1);

    primes[0] = 0; // 0 is not a prime number
    primes[1] = 0; // 1 is not a prime number

    // The Sieve of Eratosthenes
    for (int i = 2; i * i < maxNum; i++) {
        if (primes[i]) { // If prime[i] is not changed, then it is a prime
            // Updating all multiples of i to not be prime
            for (int j = i * i; j < maxNum; j += i) {
                primes[j] =  0 ;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    // Optional: Output some prime numbers to verify the sieve
    for (int i = 0; i < 100; i++) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}