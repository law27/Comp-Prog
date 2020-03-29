#include<iostream>
using namespace std;

int main()
{
    int num ;
    int x = 0;
    cin >> num ;
    while(num--)
    {
        string input ;
        cin >> input ;
        if( input[0] == '+' || input[2] == '+' )
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
}
