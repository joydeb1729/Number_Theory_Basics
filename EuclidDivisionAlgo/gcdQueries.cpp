#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b) {
    
    if(b==0)
    return a;

    else
    return gcd(b,(a%b));
}

void solve()
{
    int q, n, i;
    cin>>n>>q;

    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int preGcd[n];
    int sufGcd[n];

    preGcd[0]=arr[0];

    for(i=1; i<n; i++)
    {
        preGcd[i]= gcd(preGcd[i-1], arr[i]);
    }

    sufGcd[0]=arr[n-1];

    for(i=n-2; i>=0; i--)
    {
        sufGcd[n-i-1]= gcd(sufGcd[n-i-2], arr[i]);
    }


    // To check the prefix and suffix GCD array

    for(i=0; i<n; i++)
    {
        cout<<preGcd[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<sufGcd[i]<<" ";
    }
    cout<<endl;


    while(q--)
    {
        int l, r;
        
        cin>>l>>r;
        
        if(l==1)
        cout<<sufGcd[n-1-r]<<endl;
        
        else if(r==n)
        cout<<preGcd[l-1]<<endl;
        
        else
        cout<<gcd(preGcd[l-1], sufGcd[r-1])<<endl;
    }



}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, q;
    
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}