#include<bits/stdc++.h>
using namespace std;

int main()
{
   unordered_map<int , int>one;
   unordered_multimap<int,int>two;
   int num ;
   cin >> num;
   int temp ;
   for(int i= 0 ; i < num ; i++)
   {
       cin >> temp ;
       one.insert(make_pair(temp ,i));
       two.insert(make_pair(temp, i));
   }
   int q;
   cin >> q;
   long long comp1 = 0;
   long long comp2 = 0;
   while(q--)
   {
       cin >> temp ;
       comp1 += ((one.find(temp)->second) +1 );
       comp2 += (num - (two.find(temp)->second) );
   }


   cout << comp1 << " " << comp2 << endl;
   return 0;
}
