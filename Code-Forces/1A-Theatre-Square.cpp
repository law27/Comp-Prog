#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double Breadth, Width, Length;
    cin >> Breadth >> Width >> Length;
    cout << (long long)ceil(Breadth / Length) * (long long)ceil(Width / Length) << endl;
    return 0;
}