#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int n ;
    while(cin >> n)
    {
    if(n!=0)
     {
        int answer = ((2*n*n*n )+ (n*n) + (2*n*n) + n ) / 6 ;
        cout << answer << endl ;
     }
    else
    {
        return 0;
    }
    
    }
}