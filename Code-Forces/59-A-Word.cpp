#include<bits/stdc++.h>
using namespace std;

int checkLower(string val)
{
    int counts = 0;
    for(int i = 0; i < val.length() ; i++)
    {
        if(islower(val[i]))
            counts++;
    }
    return counts ;
}

int main()
{
    string val ;
    cin >> val ;
    int lower = checkLower(val);
    int upper = val.length() - lower ;
    if( lower >= upper)
        transform(val.begin() , val.end() , val.begin() , ::tolower);
    else
        transform(val.begin() , val.end() , val.begin() , ::toupper);
    cout << val << endl ;
    return 0;
}
