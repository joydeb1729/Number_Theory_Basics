#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int powerModulo(int x, int n, int p) {


    int res=1;

    while(n)
    {
        if(n%2==0)
        {
            x=(x*x)%p;
            n/=2;
        }
        else
        {
            res=(res*x)%p;
            n--;
        }
    }

        return res;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,n,p;

    cin>>x>>n>>p;

    cout<<powerModulo(x,n,p);

    return 0;
}