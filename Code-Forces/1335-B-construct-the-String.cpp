#include<bits/stdc++.h>
using namespace std;

string distinct(int ab)
{
    string str ;
    for(int a = 97 ; a < 97+ab ; a++)
    {
        str += (char)a;
    }
    return str;
}

void result(string &ans ,int a , int b)
{
    int val = 0;
    for(int i = 0 ; i < a ; i++)
    {
        ans += (char) 97+val ;
        ++val;
        if(val >= b)
            val = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        string ans;
        for(int i = 0 ; i < n ; i++)
        {
            result(ans,a,b);
        }
        ans = ans.substr(0 , n);
        cout << ans << endl;
    }
    return 0;
}
