#include <iostream>
using namespace std;

int main()
{
    int Weight;
    cin >> Weight;

    if (Weight % 2 == 0 && Weight != 2)
    {
        cout << "YES \n";
    }

    else
    {
        cout << "NO \n";
    }

    return 0;
}