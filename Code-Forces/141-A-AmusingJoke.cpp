#include<bits/stdc++.h>
using namespace std;

int main()
{
    string first , second , temp;
    cin >> first ;
    cin >> second ;
    cin >> temp ;
    first += second ;
    sort(first.begin() , first.end());
    sort(temp.begin() , temp.end());
    int val = 0;
    for(int i =0 ; i < first.size() ; i++)
    {
        if(count(first.begin() , first.end() , first[i]) != count(temp.begin() , temp.end() , first[i]))
        {
            cout << "NO" << endl;
            return 0;
        }
        val++;
    }
    if(val < temp.size())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
