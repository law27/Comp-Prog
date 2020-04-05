#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ans;
    int num ;
    cin >> num ;
    map< string , int >val;
    while(num--)
    {
        cin >> ans;
        map< string , int>::iterator iter = val.find(ans);
        if(iter == val.end())
        {
            val.insert(make_pair(ans , 0));
            cout << "OK" << endl;
        }
        else
        {
            iter->second += 1;
            cout << iter->first << iter->second << endl;
        }
    }
    return 0;
}
