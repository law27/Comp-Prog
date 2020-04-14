#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int>arr(num);
    for(int i=0 ; i < num ; i++)
        cin >> arr[i];
    int minimum = 99999;
    pair<int , int>ans;
    for(int i = 0 ; i < num-1 ; i++)
    {
        int temp = abs(arr[i]-arr[i+1]);
        if(temp < minimum)
        {
              minimum = temp;
              ans.first = i;
              ans.second = i+1;
        }
    }
    if(abs(arr[0]-arr[num-1]) < minimum)
    {
        ans.first = num-1;
        ans.second = 0;
    }
    cout << ans.first+1 << " " << ans.second+1 << endl;
    return 0;
}
