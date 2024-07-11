#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long long mod = 1000000007LL;


ll arr[2];
ll I[2][2];
ll T[2][2];

void mul(ll A[2][2], ll B[2][2], int dim )
{

    int i, j, k;
    ll res[dim][dim];

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            res[i][j]=0;
            for(k=0; k<dim; k++)
            {
                //res[i][j]+=A[i][k]*B[k][j];

                ll x= (A[i][k] * B[k][j]) % mod;
                res[i][j]=(res[i][j] + x)%mod;
            }
        }
    }

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            A[i][j]=res[i][j];
        }
    }


}



ll getFib(ll n)
{


    if(n == 0) return arr[0];
    if(n == 1) return arr[1];

    while(n)
    {
        if(n%2==0)
        {
            mul(T,T,2);
            n/=2;
        }
        else
        {
            mul(I,T,2);
            n--;
        }
    }

    ll Fn= ((arr[0]* I[0][0])  +  (arr[1]* I[1][0]))%mod;

    return Fn;


}


void solve() {

    ll n;
   
    cin>>arr[0]>>arr[1]>>n;

    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;


    T[0][0]=0;
    T[0][1]=T[1][0]=T[1][1]=1;

    cout<<getFib(n)<<endl;

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
