#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int temp1  , temp2;
    int right = 0 , left = 0;
    for(int i = 0; i < num ; i++)
    {
        cin >> temp1 >> temp2 ;
        left += temp1;
        right += temp2;
    }
    cout << min(left , abs(num - left)) + min(right , abs(num- right)) << endl;
    return 0;
}
