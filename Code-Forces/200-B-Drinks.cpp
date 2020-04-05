#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num;
    cin >> num;
    vector<double>ans(num , 0.0);
    for(int i = 0 ; i < num ; i++)
    {
        cin >> ans[i];
        ans[i] /= 100.00;
    }
    double fin = accumulate(ans.begin() , ans.end() , 0.0);
    cout << fixed << setprecision(12) << (fin / num) * 100 << endl;
    return 0;

}
