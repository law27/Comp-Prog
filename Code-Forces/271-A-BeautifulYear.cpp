#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool distinct(vector<int>arr)
{
    unordered_set<int>s ;
    for( auto i = arr.begin() ; i != arr.end() ; i++)
        s.insert(*i);
    if(s.size() == arr.size())
        return true;
    return false;
}

int main()
{
   int val ;
   cin >> val ;
   val++;
   while(true)
   {
        int num = val;
        vector<int>law ;
        law.push_back(num%10);
        num /= 10;
        law.push_back(num%10);
        num /= 10;
        law.push_back(num%10);
        num /= 10;
        law.push_back(num%10);
        if(distinct(law))
        {
            cout << val << endl;
            return 0;
        }
        else
        {
            val++;
        }
   }
   return 0;
}
