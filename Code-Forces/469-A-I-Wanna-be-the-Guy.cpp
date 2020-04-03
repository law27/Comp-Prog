#include<bits/stdc++.h>
using namespace std;

int main()
{
     int temp ;
    int num ;
    cin >> num ;
    int p;
    cin >> p;
    vector<int>ans1;
    for(int i = 0 ;i < p ; i++)
    {
       cin >> temp ;
       ans1.push_back(temp);
    }
    int q;
    cin >> q;
    vector<int>ans2;
    for(int i = 0 ;i < q ; i++)
    {
        cin >> temp ;
        ans2.push_back(temp);
    }
    vector<int>ans(p+q);
    merge(ans1.begin() , ans1.end() , ans2.begin() , ans2.end() , ans.begin());
    sort(ans.begin() , ans.end());
    vector<int>::iterator iter = unique(ans.begin() , ans.end());
    if( num == distance(ans.begin() , iter))
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
