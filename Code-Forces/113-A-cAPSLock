#include<bits/stdc++.h>
using namespace std;

bool firstLetter(string val)
{
    for(int i = 1 ; i < val.length() ; i++)
    {
        if(islower(val[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string val ;
    cin >> val ;
    if( islower(val[0]))
    {
        if(firstLetter(val))
        {
            transform( val.begin() , val.end() ,val.begin(), ::tolower );
            val[0] = toupper(val[0]);
            cout << val << endl;
            return 0;
        }
        else
        {
            cout << val << endl;
        }
    }
    else if(isupper(val[0]))
    {
        if(!firstLetter(val))
        {
            cout << val << endl;
        }
        else
        {
            transform( val.begin() , val.end() , val.begin() , ::tolower);
            cout << val << endl;
        }
    }

    return 0;
}
