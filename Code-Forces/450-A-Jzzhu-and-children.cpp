#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n  ;
    float m;
    cin >> n >> m;
    float *arr = new float[n];
    int maxi = -1;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        arr[i] = ceil(arr[i]/m);
    }
    for(int i = n-1 ; i >=0 ; i--)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            ans = i;
        }
    }
    cout << ans+1 << endl;
    return 0;

}
