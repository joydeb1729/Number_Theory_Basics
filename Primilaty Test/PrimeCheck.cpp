//Primality Test -> https://www.codechef.com/problems/PRB01

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


bool isPrime(ll n)
{
    if(n==1) return false;

    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }

    return true;
}


void solve() {

    ll n;
    cin>>n;

    if(isPrime(n))
    cout<<"yes"<<endl;

    else
    cout<<"no"<<endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}