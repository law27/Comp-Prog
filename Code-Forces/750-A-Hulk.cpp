#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num ;
    string hate = "I hate it";
    string love = "I love it";
    for(int i = 1 ; i < num ; i++)
    {
        if( i % 2 != 0)
        {
            cout << "I hate that ";
        }
        else
        {
            cout << "I love that ";
        }
    }
    if( num % 2 == 0)
    {
        cout << love << endl;
    }
    else
    {
        cout << hate << endl;
    }
    return 0;
}
