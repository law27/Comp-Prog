#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num ;
    cin >> num ;
    if( num % 2 ==0 )
        cout << num / 2 << endl;
    else
        cout << - ( num+1 )/ 2 << endl;
    return 0;
}
