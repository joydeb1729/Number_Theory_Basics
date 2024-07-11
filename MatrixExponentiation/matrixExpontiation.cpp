#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define N 101

int arr[N][N];
int I[N][N];


void mul(int A[][N], int B[][N], int dim)
{
    int i, j, k;
    int res[dim+1][dim+1];

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            res[i][j]=0;
            for(k=0; k<dim; k++)                // res= res + (A*I) 
            {
                res[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
    for(i=0; i<dim; i++)          // updating after every multiplication
    {
        for(j=0; j<dim; j++)
        {
            I[i][j]=res[i][j];
        }
    }

}


void power(int A[][N], int dim, int n)
{
    int i, j, k;

/*
    //Noob approach time complexity = O(M^3 * N)
    for(i=0; i<n; i++)
    {
        mul(A,I,dim);
    }
*/


    //Using Binary Exponentiation,  time complexity = O(M^3 * logN)
    while(n)
    {
        if(n%2==0)
        {
            mul(A,A,dim);
            n/=2;
        }
        else
        {
            mul(A,I,dim);
            n--;
        }
    }




    for(i=0; i<dim; i++)
    {                           // updating after all multiplication
        for(j=0; j<dim; j++)
        {
            A[i][j]=I[i][j];
        }
    }

}

void printMatrix(int A[][N], int dim)
{
    int i, j;

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++){cout<<A[i][j]<<" ";}
        cout<<endl;
    }
}

void solve()
{

    int i, j, dim, n;

    cin>>dim>>n;

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<dim; i++)
    {
        for(j=0; j<dim; j++)
        {
            if(i==j){I[i][j]=1;}
            else{I[i][j]=0;}
        }
    }

    power(arr,dim,n);

    printMatrix(arr,dim);

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