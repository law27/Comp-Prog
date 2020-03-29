#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val;
    int danger = 0;
    cin >> val ;
    int num = val.length();
    char temp = val[0];
    for(int i = 0; i < num ; i++)
    {
        if(val[i] == temp)
        {
            ++danger;
            if( danger == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            danger = 1;
        }
        temp = val[i];
    }
        cout << "NO" << endl;
    return 0;
}
