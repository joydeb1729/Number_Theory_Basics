#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxNum = 5000001;

int arr[maxNum];

void primeFactorBySeive() {

    int i, j, n;

    cin>>n;


    arr[0]=arr[1]=1;

    for(i=2; i*i<maxNum; i++)
    {
        if(!arr[i])
        {
            for(j=i*i; j<maxNum; j+=i)
            {
                arr[j]=i;
            }
        }

    }
    


    while(arr[n])
    {
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }
    cout<<n<<" ";

}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    primeFactorBySeive();
    return 0;
}