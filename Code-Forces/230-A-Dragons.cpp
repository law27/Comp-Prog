#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num , strength ;
    cin >> strength >> num ;
    vector<pair<int , int> >x(num) ;
    for(int i = 0; i < num ; i++)
    {
        cin >> x[i].first >> x[i].second ;
    }
    sort(x.begin() , x.end());
    for(int i = 0 ; i < num ; i++)
    {
        if(strength > x[i].first)
        {
            strength+= x[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}
