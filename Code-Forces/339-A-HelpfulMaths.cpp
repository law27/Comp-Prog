#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if(input.length() <= 1)
    {
        cout << input << endl;
        return 0;
    }
    vector<char>arr;
    for(int i = 0; i < input.length() ; i++ )
    {
         if( input[i] != '+' )
         {
             arr.push_back(input[i]);
         }
    }
    sort(arr.begin(),arr.end());
    string ans;
    for(auto i = arr.begin() ; i != arr.end() ; i++)
    {
        ans = ans+=*i;
        ans = ans+"+";
    }
    ans.erase(ans.length()-1);
    cout << ans << endl;
    return 0; 
}
