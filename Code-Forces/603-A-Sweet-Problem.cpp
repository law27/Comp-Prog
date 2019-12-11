#include <iostream>
#include <algorithm>
typedef long long integer;
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        integer *arr = new integer[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        integer a = arr[0] + arr[1];

        if (arr[2] == a)
        {
            cout << arr[2] << endl;
        }
        else if (arr[2] > a)
        {
            cout << a << endl;
        }
        else
        {
            integer b = (a - arr[2]) / 2;

            cout << arr[2] + b << endl;
        }
    }
    return 0;
}
