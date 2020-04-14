// C++ Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int num;
   cin >> num ;
   int sum = 0;
   int temp ;
   for(int i= 0 ; i < num ; i++)
   {
       cin >> temp ;
       sum += temp ;
   }
   int ans = 0;
    for(int i = 1 ; i <= 5 ; i++)
    {
        if((sum+i) % (num+1) != 1)
            ++ans ;
    }
    cout << ans << endl;
    return 0;
}
