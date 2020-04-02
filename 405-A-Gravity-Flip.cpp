#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    int *arr = new int[num];
    for(int i = 0; i < num ; i++)
        cin >> arr[i];
    sort(arr , arr+num);
    for(int i = 0 ; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
