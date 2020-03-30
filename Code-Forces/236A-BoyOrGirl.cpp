#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val ;
    cin >> val ;
    sort(val.begin(),val.end());
    auto res = unique( val.begin() , val.end() );
    string ans = string( val.begin() , res );
    if( ans.length() % 2 == 0 )
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
