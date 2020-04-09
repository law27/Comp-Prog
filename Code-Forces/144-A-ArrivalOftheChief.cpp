#include<bits/stdc++.h>
using namespace std;

int main()
{
   int num ;
   cin >> num ;
   vector<int>ans(num , 0);
   pair<int , int>mins ;
   pair<int , int>maxs ;
   mins.first = INT_MAX;
   maxs.first = 0;
   for(int i = 0 ; i < num ; i++)
   {
       cin >> ans[i] ;
       if( ans[i] > maxs.first )
       {
           maxs.first = ans[i];
           maxs.second = i ;
       }
       if( ans[i] <= mins.first )
       {
           mins.first = ans[i];
           mins.second = i;
       }
   }
   if( maxs.second < mins.second )
   {
        cout << abs(maxs.second - 0) + abs((num - 1) - mins.second) << endl;
   }
   else
   {        
        cout << (abs(maxs.second - 0) + abs((num - 1) - mins.second)) - 1 << endl;
   }
    return 0;
}
