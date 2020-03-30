#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num ;
    string input;
    cin >> input;
    char checkVal = input[0];
    int toRemove = 0;
    int tempRemove = 0;
    for(int i = 1; i < num ; i++ )
    {
        if(input[i] == checkVal)
        {
                 tempRemove++;
        }
        else
        {
            toRemove +=tempRemove;
            tempRemove = 0;
            checkVal = input[i];
        }
    }
    if( toRemove == 0)
    {
        cout << tempRemove << endl;
    }
    else
    {
        cout << toRemove + tempRemove << endl ;
    }
    return 0;
}
