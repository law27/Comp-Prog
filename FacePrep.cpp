#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> arr;
    while (cin >> n) {
        arr.push_back(n);
    }
    map<int, int> mp;
    for(int i : arr) {
        ++mp[i];
    }
    bool ans = true;
    for(auto i : mp) {
        if(i.second % 2) {
            ans = false;
            break;
        }
    }
    cout << boolalpha << ans << endl;
    return 0;
}
