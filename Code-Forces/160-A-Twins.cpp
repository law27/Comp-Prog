#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    int *arr = new int[num];
    for(int i = 0 ;i < num ; i++)
    {
        cin >> arr[i];
    }
    sort(arr , arr+num , greater<int>()) ;
    int sum = accumulate(arr , arr+num , 0);
    int val = 0;
    int coins = 0;
    for(int i = 0 ; i < num ; i++)
    {
        if ( val > sum )
        {
            break;
        }
        else
        {
            val += arr[i];
            sum -= arr[i];
            coins++;
        }
    }
    cout << coins << endl;
    return 0;
}
