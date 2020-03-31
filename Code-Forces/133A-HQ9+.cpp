#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input ;
    cin >> input ;
    if( input.find('H') != string::npos || input.find('Q') != string::npos || input.find('9') != string::npos)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
}
