#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    int *arr = new int[num];
    for(int i = 0 ; i < num; i++)
        cin >>arr[i] ;
    int temp_max = 0;
    int per_max = 0;
    for(int i = 0 ; i < num-1 ; i++)
    {
        if( arr[i] <= arr[i+1])
        {
            temp_max++;
        }
        else
        {
            per_max = max( temp_max , per_max);
            temp_max = 0;
        }
    }
    per_max = max( per_max , temp_max);
    cout << per_max+1 << endl ;
    return 0;
}
