#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int , int>ans ;
    int arr[5][5];
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin >> arr[i][j];
            if( arr[i][j] == 1 )
            {
                ans.first = i ;
                ans.second = j;
            }
        }
    }
    cout << abs(ans.first-2) + abs(ans.second-2) << endl;
    return 0;
}
