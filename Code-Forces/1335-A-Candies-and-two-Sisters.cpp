// C++ Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int num ;
       cin >> num;
       if(num%2)
        cout << (num/2) << endl;
       else
        cout << (num/2)-1 << endl;
   }
   return 0;
}
