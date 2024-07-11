#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void findPrimeFactor()
{

    int n, count, i;
    cin >> n;

    for (i = 2; i*i <= n; i++)
    {
        count = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n = n / i;
                count++;
            }

            cout << "(" << i << "^" << count << ")" << endl;
        }
    }
    if(n>1)
    cout << "(" << n << "^" << "1)" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    findPrimeFactor();

    return 0;
}