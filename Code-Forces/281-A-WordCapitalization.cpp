#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string val;
    cin >> val;
    char a = val[0];
    val[0] = toupper(a);
    cout << val << endl;
    return 0;
}
