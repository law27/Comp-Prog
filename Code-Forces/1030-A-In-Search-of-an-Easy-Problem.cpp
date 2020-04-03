#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num ;
    int temp ;
    bool law = true;
    for(int i =0 ; i < num ; i++)
    {
        cin >> temp ;
        if( temp == 1)
            law = false;
    }
    if(law)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    return 0;
}
