#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    int i = 0 , j = 0 , k = 0;
    for(int m = 0 ; m < num ; m++)
    {
        int a , b , c;
        cin >> a >> b >> c ;
        i += a ;
        j += b ;
        k += c ;
    }
    if( i == 0 && j == 0 && k==0 )
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
}
