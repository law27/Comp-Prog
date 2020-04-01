#include<iostream>
using namespace std ;

int main()
{
    int num;
    int pairs = 1;
    cin >> num;
    int temp = 0,magnet ;
    cin >> temp ;
    magnet = temp % 10;
    --num;
    while(num--)
    {
        cin >> temp ;
        if(!(magnet == temp%10))
        {
            pairs++;
        }
      magnet = temp%10;
    }
    cout << pairs << endl;
    return 0;
}
