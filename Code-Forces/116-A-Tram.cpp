#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num;
    int maximum = 0;
    int a , b,prev_value = 0 ;
    for(int i = 0 ; i < num ; i++)
    {
        cin >> a >> b;
        prev_value =  abs(prev_value - a) + b;
        maximum = max( maximum , prev_value);
    }
    cout << maximum << endl;
    return 0;
}
