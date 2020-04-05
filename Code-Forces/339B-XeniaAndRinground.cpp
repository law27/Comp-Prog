#include<bits/stdc++.h>
using namespace std;
//not Loyal one
int main()
{
    long long n , m;
    cin >> n >> m ;
    vector<long long>ans(m , 0);
    for(int i = 0 ; i < m ; i++)
    {
        cin >> ans[i];
    }
    long long cPos = 1;
    long long timeTaken = 0;
    for(int i = 0 ; i < m ; i++)
    {
        long long val = ans[i] - cPos;
        if(ans[i]-cPos >=0)
        {
            cPos = ans[i];
            timeTaken = timeTaken + val;
        }
        else
        {
            cPos = ans[i];
            timeTaken += ( n + val);
        }
    }
    cout << timeTaken << endl;
    return 0;
}
 
