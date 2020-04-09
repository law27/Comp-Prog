#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n , m;
    cin >> n >> m;
    cout << n + floor(((n-1) / (m-1))) << endl;
    return 0;
}
