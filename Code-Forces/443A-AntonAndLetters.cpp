#include<bits/stdc++.h>
using namespace std;

int main()
{
    string val ;
    getline(cin , val);
    vector<char>ans ;
    for(int i = 0 ; i < val.length() ; i++)
    {
        if( val[i] != ' ' && val[i] != ',' && val[i] != '}' && val[i] != '{' )
        {
            ans.push_back(val[i]);
        }
    }
    sort(ans.begin() , ans.end());
    auto iter = unique(ans.begin() , ans.end());
    string num = string(ans.begin() , iter);
    cout << num.length() << endl;
    return 0;
}
