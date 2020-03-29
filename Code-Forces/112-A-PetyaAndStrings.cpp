#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
 
int main()
{
    string val ;
    string val2;
    cin >> val >> val2;
    transform(val.begin(), val.end(), val.begin(), ::tolower);
    transform(val2.begin(), val2.end(), val2.begin() , ::tolower);
    if( val == val2 )
    {
        cout << 0 << endl;
    }
    else if( lexicographical_compare(val.begin(),val.end(),val2.begin(),val2.end()))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
