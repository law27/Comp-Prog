#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val ;
    cin >> val ;
    string poo = "hello";
    int a = 0 ;
    for(char i : val)
    {
        if( poo[a] == i )
        {
            ++a;
            if( a == 5 )
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}


