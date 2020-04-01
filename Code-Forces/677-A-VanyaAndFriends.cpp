#include<iostream>
using namespace std ;

int main()
{
    int n , h;
    cin >> n >> h;
    int temp ;
    int taller = 0;
    for(int i = 0; i < n ; i++)
    {
        cin >> temp ;
        if( temp > h )
            taller++;
    }
    n -= taller;
    cout << n + (taller*2) << endl;
    return 0;
}
