#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int minLow ;
    int maxHigh;
    int awesome = 0;
    int temp;
    cin >> temp ;
    minLow = maxHigh = temp;
    for(int i = 1 ; i < num ; i++)
    {
        cin >> temp ;
        if( temp > maxHigh)
        {
            awesome++;
            maxHigh = temp;
        }
        if( temp < minLow)
        {
            awesome++;
            minLow = temp;
        }
    }
    cout << awesome << endl;
}
