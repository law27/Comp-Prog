#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k , n , w ;
    cin >> k >> n >> w;
    int val = (w *(w + 1)) / 2 ;
    val *= k ;
    if( (val - n) <= 0 )
    {
        cout << 0 << endl;
    }
    else
    {
        cout << val - n << endl;
    }
    return 0;
}

