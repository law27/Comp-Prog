#include<iostream>
using namespace std;

int main()
{
    long long int num ;
    cin >> num ;
    long int lucky = 0;
    while( num != 0 )
    {
        if( num % 10 == 4 || num % 10 == 7 )
        {
            lucky++;
        }
        num /= 10;
    }
    if(lucky == 0)
    {
        cout << "NO" << endl;
        return 0;
    } else {
        while (lucky != 0) {
            if (lucky % 10 != 4 && lucky % 10 != 7) {
                cout << "NO" << endl;
                return 0;
            }
            lucky /= 10;
        }
    }
    cout << "YES" << endl;
    return 0;
}
