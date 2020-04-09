#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i <= n/2 ; i++)
    {
        if( n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n , m;
    cin >> n >> m;
    int temp = n+1;
    bool found = false;
    while(!found)
    {
        if(isPrime(temp))
        {
            found = true;
            break;
        }
        temp++;
    }
    if(temp==m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
