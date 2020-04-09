#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string val;
    cin >> val;
    for(int i = 0 ; i < val.size() ; i++)
    {
        if( val[i]=='.')
        {
            cout << 0 ;
        }
        else
        {
            if(i+1 < val.size())
            {
                if(val[i+1]=='.')
                {
                    cout << 1 ;
                }
                else
                {
                    cout << 2 ;
                }
            }
            ++i;
        }
    }
    cout << "\n";
    return 0;
}
