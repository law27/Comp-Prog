#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    if( num % 4 == 0 || num % 7 == 0 || num % 47 == 0 )
    {
        cout << "YES" << endl;
        return 0;
    }
    while( num != 0)
    {
        int val = num % 10;
        if ( ! (val == 4 || val  == 7 )  )
        {
            cout << "NO" << endl;
            return 0;
        }
        num /= 10;
    }
    cout << "YES" << endl;
    return 0;
}

