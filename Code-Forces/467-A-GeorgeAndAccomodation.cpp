#include<bits/stdc++.h>
using namespace std;



int main()
{
    int num;
    cin >> num ;
    int p , q ;
    int acc = 0;
    for(int i = 0 ; i < num ; i++)
    {
        cin >> p >> q;
        if( p + 2 <= q)
        {
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}
