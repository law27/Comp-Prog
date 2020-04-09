#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp;
    map<int , int ,less<int> >val;
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> temp ;
        val.insert(map<int,int , less<int> >::value_type(temp , i));
    }
    cout << 4 - val.size() << endl;
    return 0;
}
