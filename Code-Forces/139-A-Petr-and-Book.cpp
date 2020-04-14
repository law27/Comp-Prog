#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num ;
    int *arr = new int[7];
    for(int i = 0; i < 7 ; i++)
        cin >>arr[i];
    int i = 0;
    int sum = 0;
    while(true)
    {
        sum += arr[i++];
        if(sum >= num)
            break;
        if( i == 7)
            i = 0;
    }
    cout << i << endl;
    return 0;
}
