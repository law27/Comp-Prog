#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    vector<int>arr(num);
    int minimum = INT_MAX ;
    int ans;
    for(int i = 0; i < num ; i++ )
    {
        cin >> arr[i];
        if( arr[i] < minimum)
        {
            minimum = arr[i];
            ans = i;
        }
    }
    if(count(arr.begin() , arr.end() , minimum) > 1)
        cout << "Still Rozdil" << endl;
    else
        cout << ans+1 << endl;
}
