#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val ;
    cin >> val ;
    string two ;
    cin >> two ;
    string temp = val ;
    reverse( temp.begin() , temp.end());
    if( two == temp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
        return 0;
}
