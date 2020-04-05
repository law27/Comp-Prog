#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num , atMost ;
    cin >> num >> atMost ;
    vector<double>ans(num , 0.0);
    for(int i = 0; i < num ; i++)
    {
        cin >> ans[i];
    }
    sort(ans.begin(),ans.end());
    double max_dist = 0.0;
    for(int i = 0 ; i < num-1 ; i++)
    {
        if(ans[i+1]-ans[i] > max_dist)
            max_dist = ans[i+1]-ans[i];
    }
    max_dist = max(max_dist/2 , max(ans[0]-0 , atMost-ans[num-1]));
    cout << fixed << setprecision(10) << max_dist << endl;
    return 0;
}
