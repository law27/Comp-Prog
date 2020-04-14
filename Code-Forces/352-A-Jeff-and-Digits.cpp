#include<bits/stdc++.h>
using namespace std;



int main()
{
   int num;
   cin >> num;
   vector<int>arr(num);
   int five = 0 , zero = 0;
   for(int i = 0; i < num; i++)
   {
       cin >> arr[i];
      (arr[i]==0) ? zero++ : five++ ;
   }
   if(zero == num)
        cout << 0 << endl;
   else if( five < 9)
   {
       if(zero != 0)
            cout << 0 << endl;
       else
            cout << -1 << endl;
   }
   else
   {
       if(zero == 0)
        cout << -1 << endl;
       else
        {
            for(int i = 0 ; i < (five) - (five%9) ; i++)
            {
                cout << 5;
            }
            for(int j = 0; j < zero ; j++)
            {
                cout << 0;
            }
            cout << endl;
        }
   }
   return 0;

}
