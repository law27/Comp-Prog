#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
   ll num;
   cin >> num;
   ll *arr = new ll[num];
   for(int i =0 ;i < num ;i++)
   {
       cin >> arr[i];
   }
   ll temp ;
   ll ans = 1000000000;
   for(int i = 0 ;i < num ; i++)
   {
       cin >> temp ;
       ans = min( ans , temp / arr[i]);   
   }
   cout << ans << endl ;
   return 0;
}
