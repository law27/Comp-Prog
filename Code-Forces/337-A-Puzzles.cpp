#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n , k;
    cin >> n >> k ;
    vector<long int>arr(k , 0);
    for(int i = 0 ; i < k ; i++)
        cin >> arr[i];
    sort(arr.begin() , arr.end());
    long int minimum = arr[n-1] - arr[0];
    for(int i = 1 ; i <= k-n ; i++)
    {
        minimum = min( arr[n-1+i] - arr[i],minimum );
    }
    cout << minimum << endl;
    return 0;
}
