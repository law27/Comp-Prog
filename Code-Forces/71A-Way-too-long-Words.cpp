#include <iostream>
using namespace std;

int main()
{
    int Test;
    cin >> Test;
    while (Test--)
    {
        string Word;
        cin >> Word;
        if (Word.length() > 10)
        {
            cout << Word[0] << Word.length() - 2 << Word[Word.length() - 1] << endl;
        }
        else
        {
            cout << Word << endl;
        }
    }
    return 0;
}